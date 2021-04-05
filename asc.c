#include<stdio.h>
int main()
{
    int a,b,c,high,mid,low;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        mid=a;
        low=b;
    }
    else
    {
        mid=b;
        low=a;
    }
    if(mid>c)
    {
        high=mid;
        if(low>c)
        {
            mid=low;
            low=c;
        }else
        mid=c;
    }else high=c;
    printf("%d < %d < %d",low,mid,high);
    return 0;
}
