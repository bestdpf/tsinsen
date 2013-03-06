#include"stdio.h"
#define WID 18
#define HEI 25
int main(int argc,char** argv)
{
	/*
	int wid=WID;
	int hei=HEI;
	*/
	int wid,hei;
	scanf("%d %d",&hei,&wid);
	int i;
	for(i=0;i<hei;i++)
	{
		int j;
		int k;
		for(j=i,k=0;k<wid;j--,k++)
			printf("%c",abs(j)+'A');
		printf("\n");
	}
	return 0;
}
