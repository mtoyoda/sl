cmake_minimum_required(VERSION 3.6)

add_library(pdcurses STATIC
            ./PDCurses/wincon/pdcscrn.c
            ./PDCurses/wincon/pdcdisp.c
            ./PDCurses/wincon/pdcsetsc.c
            ./PDCurses/wincon/pdcwin.h
            ./PDCurses/wincon/pdcclip.c
            ./PDCurses/wincon/pdcgetsc.c
            ./PDCurses/wincon/pdckbd.c
            ./PDCurses/wincon/pdcutil.c
            ./PDCurses/pdcurses/addch.c
            ./PDCurses/pdcurses/getstr.c
            ./PDCurses/pdcurses/bkgd.c
            ./PDCurses/pdcurses/insstr.c
            ./PDCurses/pdcurses/scroll.c
            ./PDCurses/pdcurses/termattr.c
            ./PDCurses/pdcurses/move.c
            ./PDCurses/pdcurses/pad.c
            ./PDCurses/pdcurses/deleteln.c
            ./PDCurses/pdcurses/printw.c
            ./PDCurses/pdcurses/clear.c
            ./PDCurses/pdcurses/attr.c
            ./PDCurses/pdcurses/touch.c
            ./PDCurses/pdcurses/scanw.c
            ./PDCurses/pdcurses/instr.c
            ./PDCurses/pdcurses/addchstr.c
            ./PDCurses/pdcurses/scr_dump.c
            ./PDCurses/pdcurses/inopts.c
            ./PDCurses/pdcurses/debug.c
            ./PDCurses/pdcurses/slk.c
            ./PDCurses/pdcurses/delch.c
            ./PDCurses/pdcurses/insch.c
            ./PDCurses/pdcurses/getyx.c
            ./PDCurses/pdcurses/util.c
            ./PDCurses/pdcurses/inchstr.c
            ./PDCurses/pdcurses/mouse.c
            ./PDCurses/pdcurses/outopts.c
            ./PDCurses/pdcurses/keyname.c
            ./PDCurses/pdcurses/beep.c
            ./PDCurses/pdcurses/kernel.c
            ./PDCurses/pdcurses/refresh.c
            ./PDCurses/pdcurses/addstr.c
            ./PDCurses/pdcurses/overlay.c
            ./PDCurses/pdcurses/color.c
            ./PDCurses/pdcurses/window.c
            ./PDCurses/pdcurses/getch.c
            ./PDCurses/pdcurses/inch.c
            ./PDCurses/pdcurses/initscr.c
            ./PDCurses/pdcurses/border.c
            ./PDCurses/pdcurses/panel.c)

target_compile_definitions(pdcurses PUBLIC PDC_WIDE UNICODE _UNICODE)
target_include_directories(pdcurses PUBLIC ./PDCurses)
