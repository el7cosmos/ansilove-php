--TEST--
test convert() with AnsiLoveType::Ansi
--EXTENSIONS--
ansilove
--FILE--
<?php
$ansiLove = new AnsiLove();
$ansiLove->convert(__DIR__ . '/bs-alove.ans', __DIR__ . '/001.ans.png', AnsiLoveType::Ansi);
var_dump(hash_file('sha256', __DIR__ . '/001.ans.png'));
?>
--EXPECTF--
string(64) "e5eacb57f0cd9244864153be752af21a5e233376891f4040481b09d059add045"
--CLEAN--
<?php
unlink(__DIR__ . '/001.ans.png');
?>
