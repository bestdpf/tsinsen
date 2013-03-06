#include"stdio.h"

int main(int argc,char**argv)
{
	const int n=64;
	int i;
	for(i=0;i<n;i++)
	{
		int j;
		for(j=5;j>=0;j--)
			printf("%d",(i>>j)%2);
		printf("\n");
	}
	return 0;
}
