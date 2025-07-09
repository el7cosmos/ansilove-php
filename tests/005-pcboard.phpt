--TEST--
test convert() with AnsiLoveType::PCBoard
--EXTENSIONS--
ansilove
--FILE--
<?php
$ansiLove = new AnsiLove();
$ansiLove->convert(__DIR__ . '/bs-alove.pcb', __DIR__ . '/001.pcb.png', AnsiLoveType::PCBoard);
var_dump(hash_file('sha256', __DIR__ . '/001.pcb.png'));
?>
--EXPECTF--
string(64) "e5eacb57f0cd9244864153be752af21a5e233376891f4040481b09d059add045"
--CLEAN--
<?php
unlink(__DIR__ . '/001.pcb.png');
?>
