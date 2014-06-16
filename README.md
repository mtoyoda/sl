SL(1): Cure your bad habit of mistyping
=======================================

SL (Steam Locomotive) runs across your terminal when you type "sl" as
you meant to type "ls".

This fork includes the -e option to allow interrupt by Ctrl+C,
(just like the Debian/Ubuntu version of sl).

If you run Arch Linux and would like to use this fork, then modify the [PKGBUILD](https://aur.archlinux.org/packages/sl/sl/PKGBUILD)
to use git://github.com/ryanmjacobs/sl.git as the source; then build it with
makepkg.

Copyright 1993,1998,2014 Toyoda Masashi (mtoyoda@acm.org)
