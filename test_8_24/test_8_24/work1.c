#include"work1.h"

int Caculate(int b)
{
	int count=0;
	while(b)
	{
		b=b&(b-1);//每次运算都会消去b最右边的1
		count++;
	}
	return count;
}