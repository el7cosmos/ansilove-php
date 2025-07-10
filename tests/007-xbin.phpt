--TEST--
test convert() with AnsiLoveType::XBin
--EXTENSIONS--
ansilove
--FILE--
<?php
$ansiLove = new AnsiLove();
$ansiLove->convert(__DIR__ . '/bs-alove.xb', __DIR__ . '/001.xb.png', AnsiLoveType::XBin);
var_dump(hash_file('sha256', __DIR__ . '/001.xb.png'));
?>
--EXPECTF--
string(64) "3ae059db40cfc49f017e4dc9d07b2216e2aad28c936d34b990fbbef8a223d638"
--CLEAN--
<?php
unlink(__DIR__ . '/001.xb.png');
?>
