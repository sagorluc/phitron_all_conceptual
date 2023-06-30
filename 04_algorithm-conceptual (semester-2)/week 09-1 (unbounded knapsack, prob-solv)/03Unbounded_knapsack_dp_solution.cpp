#include<bits/stdc++.h>
using namespace std;

int mxx_sum(vector<int>&len, vector<int>&price, int sz, int length)
{
    /// base case
    if(sz == 0 or length == 0)
        return 0;

    /// two choice diagram
    int ans = 0;
    if(len[sz-1] <= length)
       return max(price[sz-1] + mxx_sum(len,price,sz, length - len[sz-1]),
                  mxx_sum(len,price,sz-1, length));
    else
        return mxx_sum(len,price,sz-1, length);


}
int main()
{
    int length;
    cin >> length;

    vector<int> len(length), price(length);

    for(int i=0; i<length; i++)
    {
        len[i] = i+1; /// avoid 0 index

        cin >> price[i];
    }


    int res = mxx_sum(len,price,length,length);
    cout<< res <<endl;


    return  0;
}


