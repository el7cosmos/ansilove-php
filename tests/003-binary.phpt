--TEST--
test convert() with AnsiLoveType::Binary
--EXTENSIONS--
ansilove
--FILE--
<?php
$ansiLove = new AnsiLove();
$ansiLove->convert(__DIR__ . '/bs-alove.bin', __DIR__ . '/001.bin.png', AnsiLoveType::Binary);
var_dump(hash_file('sha256', __DIR__ . '/001.bin.png'));
?>
--EXPECTF--
string(64) "d56d3291368d81f34e7f1487622290a472dc651bcdc554ac2b979efea3f7f1af"
--CLEAN--
<?php
unlink(__DIR__ . '/001.bin.png');
?>
