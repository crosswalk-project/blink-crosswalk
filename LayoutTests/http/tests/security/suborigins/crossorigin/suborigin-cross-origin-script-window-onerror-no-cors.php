<?php
    header("Content-Security-Policy: suborigin foobar");
?>
<!DOCTYPE html>
<head>
</head>
<body>
    <script src="/js-test-resources/js-test.js"></script>
    <script>
        window.jsTestIsAsync = true;
        description("The test passes if 'window.onerror' gets unsanitized information about an exception thrown in a script loaded with a 'crossorigin' attribute, and delivered with valid CORS headers.");

        window.onerror = function(msg, url, line, column, error) {
            window.msg = msg;
            window.url = url;
            window.line = line;
            window.column = column;
            window.errorObject = error;
            shouldBeTrue("/SomeError/.test(msg)");
            shouldBeEqualToString("url", "http://localhost:8000/security/resources/cors-script.php?fail=true&cors=true");
            shouldBe("line", "1");
            shouldBe("column", "1");
            shouldNotBe("window.errorObject", "null");
            finishJSTest();
        }
    </script>
    <script src="/security/resources/cors-script.php?fail=true&cors=false"></script>
</body>
</html>
