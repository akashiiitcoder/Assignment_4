#include <stdio.h>
int main()
{
       int n1,n2;
     scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++)
    {
        if((i/10)%2!=i%2)
        printf("%d\n",i);
    }
}
