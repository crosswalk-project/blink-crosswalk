if (self.importScripts) {
  importScripts('../resources/fetch-test-helpers.js');
  importScripts('../resources/fetch-access-control-util.js');
}

// Tests for CORS preflight fetch (simple methods).
// Spec: https://fetch.spec.whatwg.org/#cors-preflight-fetch

var TEST_TARGETS = [];

['GET', 'POST'].forEach(function(method) {
    var checkMethod = checkJsonpMethod.bind(this, method);
    TEST_TARGETS.push(
      // Tests for Access-Control-Allow-Headers header.
      [OTHER_BASE_URL + 'mode=cors&method=' + method + '&headers=CUSTOM',
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*',
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=' + BASE_ORIGIN,
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&ACAHeaders=x-serviceworker-test',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=' + BASE_ORIGIN +
       '&ACAHeaders=x-serviceworker-test',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&ACAHeaders=x-serviceworker-test&ACEHeaders=Content-Length, X-ServiceWorker-ServerHeader',
       [fetchResolved, hasContentLength, hasServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=' + BASE_ORIGIN +
       '&ACAHeaders=x-serviceworker-test&ACEHeaders=Content-Length, X-ServiceWorker-ServerHeader',
       [fetchResolved, hasContentLength, hasServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],

      // Test that Access-Control-Allow-Headers is checked in
      // CORS preflight fetch.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=200',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&ACAHeaders=x-serviceworker-test&PreflightTest=200',
       [fetchRejected]],

      // Test that CORS check is done in both preflight and main fetch.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=200',
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=200',
       [fetchRejected]],

      // Test that Access-Control-Expose-Headers of CORS preflight is ignored.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PACEHeaders=Content-Length, X-ServiceWorker-ServerHeader&PreflightTest=200',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],

      // Test that CORS preflight with Status 2XX succeeds.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=201',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],

      // Test that CORS preflight with Status other than 2XX fails.
      // https://crbug.com/452394
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=301',
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=401',
       [fetchRejected]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PreflightTest=500',
       [fetchRejected]],

      // Test CORS preflight with multiple request headers.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM2&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-servicEworker-u, x-servicEworker-ua, x-servicewOrker-test, x-sErviceworker-s, x-sErviceworker-v&PreflightTest=200',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader2]],
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM2&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-servicewOrker-test&PreflightTest=200',
       [fetchRejected]],

      // Test request headers sent in CORS preflight requests.
      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-serviceworker-test&PACRMethod=' + method +
       '&PACRHeaders=x-serviceworker-test&PreflightTest=200',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader]],
      // Test Access-Control-Request-Headers is sorted https://crbug.com/452391

      [OTHER_BASE_URL + 'mode=cors&method=' + method +
       '&headers=CUSTOM2&ACAOrigin=*&PACAOrigin=*&PACAHeaders=x-servicEworker-u, x-servicEworker-ua, x-servicewOrker-test, x-sErviceworker-s, x-sErviceworker-v&PACRMethod=' + method +
       '&PACRHeaders=x-serviceworker-s, x-serviceworker-test, x-serviceworker-u, x-serviceworker-ua, x-serviceworker-v&PreflightTest=200',
       [fetchResolved, noContentLength, noServerHeader, hasBody, typeCors],
       [checkMethod, hasCustomHeader2]]);
  });

if (self.importScripts) {
  executeTests(TEST_TARGETS);
  done();
}
