#ifndef MODERN_LFSR_H_
#define MODERN_LFSR_H_

/* must be called before mlfsrRand() and mlfsrRandInRange() */
void mlfsrSetSeedAndMask(void);
int mlfsrRand(void);
int mlfsrRandInRange(int min, int max);

#endif /* MODERN_LFSR_H_ */
