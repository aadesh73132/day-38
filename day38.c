#include<stdio.h>
int main()
{
    int a[]={2,5,8};

    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%d+%d+%d=%d\n",a[0],a[1],a[2],a[0]+a[1]+a[2]);
    }
    
    return 0;
}
