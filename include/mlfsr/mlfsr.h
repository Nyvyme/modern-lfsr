#ifndef MODERN_LFSR_H_
#define MODERN_LFSR_H_

void mlfsrSetSeedAndMask(void); // must be called before mlfsrRand() and mlfsrRandInRange()
int mlfsrRand(void);
int mlfsrRandInRange(int min, int max);

#endif // MODERN_LFSR_H_
