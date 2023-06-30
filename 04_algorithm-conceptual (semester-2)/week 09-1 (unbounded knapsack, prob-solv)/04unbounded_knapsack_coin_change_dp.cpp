
/// print how many ways we can make the target.

#include<bits/stdc++.h>
using namespace std;

int mxx_sum(vector<int>&len, int sz, int target)
{
    /// base case
    if(target == 0)
        return 1;
    if(sz == 0)
        return 0;

    /// two choice diagram
    int ans;

    ans =  mxx_sum(len,sz-1, target); /// not taking

    if(len[sz-1] <= target)
        ans = ans + mxx_sum(len,sz, target - len[sz-1]); /// take with plus not taking

    return ans;

}
int main()
{
    int length, target;
    cin >> length;

    vector<int> len(length);

    for(int i=0; i<length; i++)
        cin >> len[i];

    cin >> target;

    int res = mxx_sum(len,length,target);
    cout<< res <<endl;


    return  0;
}



