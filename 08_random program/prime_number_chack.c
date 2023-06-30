#include<stdio.h>
int main()
{
    int value,prime=1;
    scanf("%d",&value);

    for(int i=2; i<value; i++)
    {
        if(value % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime)
        printf("prime\n");
    else
        printf("not prime\n");


    return 0;
}
