
Debian
====================
This directory contains files used to package smncd/smnc-qt
for Debian-based Linux systems. If you compile smncd/smnc-qt yourself, there are some useful files here.

## smnc: URI support ##


smnc-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install smnc-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your smnc-qt binary to `/usr/bin`
and the `../../share/pixmaps/smnc128.png` to `/usr/share/pixmaps`

smnc-qt.protocol (KDE)

