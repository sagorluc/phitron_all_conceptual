#include<bits/stdc++.h>
using namespace std;
int main()
{
    // count number
    // time complexity- O(1)

    int n;
    cin >> n;

    cout<<"total number : "<< (int)log10(n) + 1;

    // time complexity - O(n).
//    int n;
//    cin >> n;
//
//    int cnt = 0;
//    while(n != 0)
//    {
//       n = n / 10;
//       cnt++;
//
//    }
//    cout<< cnt;

    // for taking very long number
    // time complexity- O(n).
//    string s;
//    cin >> s;
//
//    int cnt = 0;
//
//    for(int i=0; i<s.size(); i++)
//    {
//         s[i]- '0';
//         cnt++;
//    }
//
//    cout<< cnt ;






    return 0;
}
