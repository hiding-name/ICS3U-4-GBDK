// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program is the print smiley face program for the GameBoy

#include <stdio.h>
#include <gb/gb.h>
#include "coolBackground.c"
#include "backgroundtiles.c"

void main() {
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
