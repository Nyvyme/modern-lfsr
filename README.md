# Modern LFSR
__LFSR__ is a very old random number generation algorithm.

It works like this:
* Shift seed by 1 bit to right
* If first bit before shifting was 1, __xor__ seed by mask, otherwise do nothing

## Available functions
``` c
void mlfsrSetSeedAndMask(); // sets seed and mask based on their addresses in memory
                            // also, this must be called before mlfsrRand() and mlfsrRandInRange()
int mlfsrRand(); // generate a random 32 bit number
int mlfsrRandInRange(int min, int max); // generate a random 32 bit number in range
```

## Manual Build
```
$ git clone https://github.com/NoWare-Development/modern-lfsr.git"
$ cd mlfsr
$ meson setup build
$ ninja -C build
```
