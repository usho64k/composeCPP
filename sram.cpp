#include "sram.h"

class Manage_sram
{
	public:
		int getValue(E_SRAM_SEED sType);
		void setValue(E_SRAM_SEED sType,int value);

	private:
		int values[E_VALUE_MAX];
		int checkSum(void);
};


int Manage_sram::getValue(E_SRAM_SEED sType)
{
	return Manage_sram::values[sType];
}

void Manage_sram::setValue(E_SRAM_SEED sType,int value)
{
	Manage_sram::values[sType] = value;
}

int Manage_sram::checkSum(void)
{
	return 0;
}
