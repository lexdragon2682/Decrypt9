# Xorpad9
### Generating Xorpads for encrypted games using browserhax

You can use http://dukesrg.no-ip.org/3ds/go to load the Launcher.dat on your 3DS. This should work on almost any firmware version below 9.3.

First build by running `make` in the project root. Then use `ncchinfo_gen` on your encrypted game (dump the game with the Gateway launcher).

Then, **if you're on firmware that is less than 7.x**, create/edit `slot0x25KeyX.bin` in a **hex editor** and put in the 7.x KeyX (no, I won't give it to you).

Place `ncchinfo.bin` (and `slot0x25KeyX.bin`, if on less then 7.x) on your SD card, and run the decryptor. It should take a while, especially if you're decrypting a larger game.

### Thanks to

Roxas75 for the method of ARM9 code injection

Cha(N), Kane49, and all other FatFS contributors for FatFS

Normmatt for `sdmc.s` as well as project infrastructure (Makefile, linker setup, etc)

Relys, sbJFn5r for the decryptor
