#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int>v;

    // outer loop time complexity- O(n)
    for(int i=1; i<n; i++)
    {
        // inner loop time complexity - O(logn)
        for(int j = n; j >= 1; j = j / 2)
        {
            v.push_back(i);
        }
    }

    for(int i=0; i<n; i++)
        cout<< v[i] << "\n";



    // outer loop time complexity- O(n)
    for(int i=1; i<=10; i++)
    {
        // inner loop time complexity - O(logn)
        for(int j = 1; j <=10; j = j + i)
        {
            v.push_back(i);
        }
    }

    return 0;
}
/*

second program
inner loop count =
i = 1
j = 1,2,3,4,5,6,7,8,9,10
i = 2
j = 1,3,5,7,9
i = 3
j = 1,4,7,10
i = 4
j = 1,5,9
i = 5
j = 1,6
i = 7
j = 1,8

time complexity- o(nlogn)
space complexity- O(1)


*/
/*
O(n) * O(logn) = O(nlogn)

time complexity- O(nlogn)
space compplexity- O(nlogn)

*/
