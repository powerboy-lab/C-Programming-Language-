/*
	译密码。
	为使电文保密，往往按一定规律将其转换成密码，收报人再按约定的规律将其译回原文。
	规律:将字母A变成字母E，a变成e，即变成其后的第4个字母;
		 W变成A，X变成B，Y变成C，Z变成D。
*/
#include <stdio.h>
int main()
{
	char ch;
	ch = getchar();
	while(1)
	{
		if(ch >= 'a' && ch < 'z' || ch >= 'A' && ch < 'Z')
		{
			if( ch >= 'w' && ch < 'z' || ch >= 'W' && ch < 'Z')
				ch = ch - 22;
			else 
				ch = ch + 4;						
		}
		printf("%c",ch);
		ch = getchar();
	}
	return 0;
} 
