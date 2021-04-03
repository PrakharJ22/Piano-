#include "pianoutl.h"
int main()
{
	char cc;
	while(1)
	{
	cc=GetAKey();
	if(cc=='1')
	break;
	TurnSoundOn(cc);
	WaitAWhile(Flash_Time);
	TurnSoundOff();
	}
	return 0;
}