#include<stdio.h>
/*
Sample Input -
512 4
1000000000 9

Sample output -
50
1


*/
int main()
{
    int n,k;
    scanf("%d %d", &n,&k);

    for(int i=1; i<=k; i++)
    {
        int lastDisit = n % 10;
        if(lastDisit != 0)
            n = n-1;
        else
        {
            n = n/10;
        }
    }
    printf("%d\n",n);

    return 0;
}
