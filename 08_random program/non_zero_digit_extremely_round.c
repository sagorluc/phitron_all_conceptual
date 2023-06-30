#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<=t; i++)
    {
      int a;
      scanf("%d",&a);

      if(a<=9)
      {
         printf("%d\n",a);

      }
      else
      {
          int res=9, value=10, cnt=1;
          for(int i=10; i<=a; i+=value)
          {
              if(cnt==10)
              {
                  value*=10;
                  cnt=1;
              }
              res++;
              cnt++;
          }
          printf("%d\n",res);
      }
    }

    return 0;
}
