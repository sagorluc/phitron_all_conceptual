/*
-> bbeaawkk
-> string input
-> largest elemment find korte hobe and largest element size er ekta array declare korte hobe.
-> and 0 diye fill korte hobe.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);

    int largest_element= 26;
    int freq[largest_element];

    for(int i=1; i<=largest_element; i++)
    {
        freq[i]=0;


    }
//    for(int i=1; i<=largest_element; i++)
//    {
//        printf("i-th %d-->%d\n",i,freq[i]);
//
//    }

    for(int i=1; i<strlen(s); i++)
    {
        freq[(s[i]-'a')+1]++; //koyta elements ace oi method.
    }
//    for(int i=1; i<=largest_element; i++)
//    {
//        printf("i->%d-->%d\n",i,freq[i]);
//
//    }

      //uniq duplicate er kaj

      int uniq = 0, duplicate = 0;
      for(int i=1; i<=strlen(s); i++)
      {
          if(freq[i]==1)
          uniq++;
          else if(freq[i]>1)
          duplicate++;
      }
      printf("uniq->%d\n",uniq);
      printf("duplicate->%d",duplicate);

    return 0;
}
