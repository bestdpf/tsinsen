#include"stdio.h"
#include"stdlib.h"
#define MAX 64
int cmp(const void* a,const void* b)
{
    return (*((int*) a)-*((int*)b));
}
int main(int argc,char** argv)
{
    const int n = MAX;
    int i;
    int tab[MAX];
    char tmp[7];
    for(i=0;i<n;i++)
    {
        //scanf("%s",tmp);
        //tab[i]=atoi(tmp);
        scanf("%d",tab+i);
    }
    qsort(tab,MAX,sizeof(int),cmp);
    for(i=0;i<n;i++)
    {
        printf("%d%d%d%d%d%d\n",tab[i]/100000,tab[i]/10000%10,tab[i]/1000%10,tab[i]/100%10,tab[i]/10%10,tab[i]%10);
    }
    //system("PAUSE");
    return 0;
}
