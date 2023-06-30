#include<stdio.h>
int main()
{
    int start,end;

    scanf("%d %d",&start,&end);

    while(start != end)
    {
        if(start > 12)
            start = start % 12;

        printf("%d ",start);
        start = start + 1;

        if( start == end)
            printf("%d ",start);

    }

    return 0;
}
