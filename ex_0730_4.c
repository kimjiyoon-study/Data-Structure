#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if(n==1)
	printf("���� 1�� %c���� %c���� �ű��. \n",from,to);
	else
	{
		hanoi_tower(n-1,from,to,tmp);
		printf("���� 1�� %c���� %c���� �ű��. \n",from,to);
		hanoi_tower(n-1,from,to,tmp);
	}
}
main()
{
	hanoi_tower(4,'A','B','C');
}