<?php

/**
 * @generate-class-entries
 * @generate-legacy-arginfo 80100
 * @undocumentable
 */

enum AnsiLoveFont: int
{
    /* PC Fonts */
    // IBM PC 80x25.
    case CP437 = 1;
    // IBM PC 80x50.
    case CP437_80x50 = 2;
    // Greek.
    case CP737 = 3;
    // Baltic.
    case CP775 = 4;
    // Latin 1.
    case CP850 = 5;
    // Latin 2.
    case CP852 = 6;
    // Cyrillic.
    case CP855 = 7;
    // Turkish.
    case CP857 = 8;
    // Portuguese.
    case CP860 = 9;
    // Icelandic.
    case CP861 = 10;
    // Hebrew.
    case CP862 = 11;
    // French-canadian.
    case CP863 = 12;
    // Nordic.
    case CP865 = 13;
    // Russian.
    case CP866 = 14;
    // Greek.
    case CP869 = 15;
    case Terminus = 20;
    case Spleen = 21;

    /* Amiga fonts */
    case Microknight = 30;
    case MicroknightPlus = 31;
    case Mosoul = 32;
    case PotNoodle = 33;
    case Topaz = 34;
    case TopazPlus = 35;
    case Topaz500 = 36;
    case Topaz500Plus = 37;
}

enum AnsiLoveMode: int
{
    case Ced = 1;
    case Transparent = 2;
    case Workbench = 3;
}

/**
 * @strict-properties
 */
class AnsiLove
{
    private string $input;
    private bool $diz;
    private bool $dos;
    private bool $iceColors;
    private bool $trueColor;
    private int $columns;
    private AnsiLoveFont $font;
    private int $bits;
    private AnsiLoveMode $mode;
    private int $scaleFactor;

    public function __construct(string $input) {}
    public function isDiz(): bool {}
    public function setDiz(bool $diz = TRUE): AnsiLove {}
    public function isDos(): bool {}
    public function setDos(bool $dos = TRUE): AnsiLove {}
    public function isIceColors(): bool {}
    public function setIceColors(bool $iceColors = TRUE): AnsiLove {}
    public function isTrueColor(): bool {}
    public function setTrueColor(bool $trueColor = TRUE): AnsiLove {}
    public function getColumns(): int {}
    public function setColumns(int $columns): AnsiLove {}
    public function getFont(): AnsiLoveFont {}
    public function setFont(AnsiLoveFont $font): AnsiLove {}
    public function getBits(): int {}
    public function setBits(int $bit): AnsiLove {}
    public function getMode(): AnsiLoveMode {}
    public function setMode(AnsiLoveMode $mode): AnsiLove {}
    public function getScaleFactor(): int {}
    public function setScaleFactor(int $scaleFactor): AnsiLove {}
}

class AnsiLoveException extends Exception
{
}
