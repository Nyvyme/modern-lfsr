# Modern LFSR
__LFSR__ is a very old random number generation algorithm.

It works like this:
* Sets seed
* Sets mask
* Shifts seed by 1 bit to right
* If first bit was 1, __xor__ seed by mask, otherwise do nothing

## Available functions
``` c
int mlfsrRand(); // generate a random 32 bit number
int mlfsrRandInRange(int min, int max); // generate a random 32 bit number in range
```

## Manual Build
```
$ git clone https://github.com/NoWare-Development/modern-lfsr.git"
$ cd mlfsr
$ mkdir build && cd build
$ cmake .. -DBUILD_SHARED=ON/OFF
$ cmake --build .
```

Option `BUILD_SHARED` describes what type of library will be built (shared or static).
