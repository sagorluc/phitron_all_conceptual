#include<stdio.h>
int min(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;

}

int gcd(int a, int b)
{
   int ans = 1;
   for(int i=1; i<=min(a,b); i++)
   {
       if(a%i==0 && b%i==0)
       {
           ans=i;

       }
   }
   return ans;
}

int main()
{
//    int a,b;
//    scanf("%d%d",&a,&b);
//
//    int res = gcd(a,b);
//    printf("The GCD is = %d\n",res);

    //if we gets q times quire

    int q;
    scanf("%d",&q);

    int a,b,res;
    for(int i=0; i<=q; i++)
    {
        scanf("%d%d",&a,&b);

        res = gcd(a,b);
        printf("GCD is = %d\n",res);
    }


    return 0;
}
