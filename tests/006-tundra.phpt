--TEST--
test convert() with AnsiLoveType::TundraDraw
--EXTENSIONS--
ansilove
--FILE--
<?php
$ansiLove = new AnsiLove();
$ansiLove->convert(__DIR__ . '/bs-alove.tnd', __DIR__ . '/001.tnd.png', AnsiLoveType::TundraDraw);
var_dump(hash_file('sha256', __DIR__ . '/001.tnd.png'));
?>
--EXPECTF--
string(64) "6af0b31146c99e22d595f394c73713aebf2688cb7697776c6f3750836d728c53"
--CLEAN--
<?php
unlink(__DIR__ . '/001.tnd.png');
?>
