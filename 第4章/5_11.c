/*
	�����롣
	Ϊʹ���ı��ܣ�������һ�����ɽ���ת�������룬�ձ����ٰ�Լ���Ĺ��ɽ������ԭ�ġ�
	����:����ĸA�����ĸE��a���e����������ĵ�4����ĸ;
		 W���A��X���B��Y���C��Z���D��
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
