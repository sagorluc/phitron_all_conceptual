#include<stdio.h>
/*
Sample Input-
1 2
3 3

Sample Output -
203
1818


*/
int main()
{
    int n,k;
    int start = 101,next_floor = 2, ans = 0;

    scanf("%d %d",&n,&k);

    for(int i=1; i<=(n*k); i++)
    {
         ans = ans + start;
         start++;

         // jump to next floor
         if( i % k == 0)
         {
             start = (100 * next_floor) + 1;
             next_floor++;
         }
    }


    printf("%d\n",ans);

    return 0;
}
