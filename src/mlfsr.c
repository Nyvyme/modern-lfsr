#include "mlfsr/mlfsr.h"

static struct {
  int seed;
  int mask;
  char carry;
} mlfsrState = {0};

static int seedAndMaskSet = 0;

void mlfsrSetSeedAndMask(void) {
  mlfsrState.seed = (int)&mlfsrState + (int)&mlfsrState.carry;
  mlfsrState.mask =
    (((int)&mlfsrState.mask + (int)&mlfsrState.seed) ^ (int)&mlfsrState);
  seedAndMaskSet = 1;
}

int mlfsrRand(void) {
  mlfsrState.carry = (mlfsrState.seed & 1);
  mlfsrState.seed = mlfsrState.seed >> 1;
  mlfsrState.seed ^= (mlfsrState.mask * mlfsrState.carry);
  return mlfsrState.seed;
}

int mlfsrRandInRange(int min, int max) {
  int rand = mlfsrRand();
  if (rand < 0) rand = -rand;
  return (rand % (max - min + 1)) + min;
}
