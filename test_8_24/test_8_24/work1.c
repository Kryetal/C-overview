#include"work1.h"

int Caculate(int b)
{
	int count=0;
	while(b)
	{
		b=b&(b-1);//ÿ�����㶼����ȥb���ұߵ�1
		count++;
	}
	return count;
}