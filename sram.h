#ifndef SRAM_H
#define SRAM_H

#ifdef __cplusplus
extern "C"{
#endif

typedef enum e_sram{
	E_VALUE0,
	E_CHECK_SUM,
	E_VALUE_MAX
}E_SRAM_SEED;

int getValue(E_SRAM_SEED sType);
void setValue(E_SRAM_SEED sType);
int getCheckSumResult(void);


#ifdef __cplusplus
}
#endif

#endif
