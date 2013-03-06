#include"stdio.h"

int main(int argc,char**argv)
{
	const int n=64;
	int i;
	for(i=0;i<n;i++)
	{
		int cnt=0;
		int j;
		for(j=5;j>=0;j--)
		{
			cnt+=(i>>j)%2;
		}
		if(cnt%2==0)continue;
		for(j=5;j>=0;j--)
			printf("%d",(i>>j)%2);
		printf("\n");
	}
	return 0;
}
