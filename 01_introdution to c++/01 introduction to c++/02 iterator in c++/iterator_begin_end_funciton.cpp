#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st = "abcdefghijk";
    string:: iterator it;
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\n\n";
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<"\n\n";
    string:: reverse_iterator itt;

    for(itt=st.rbegin(); itt!=st.rend(); itt++)
    {
        cout<<*itt<<" ";
    }

    cout<<"\n\n";
    for(auto itt=st.rbegin(); itt!=st.rend(); itt++)
    {
        cout<<*itt<<" ";
    }


    return 0;
}
/*
begin() to end()
abcdefghijk
|         |
begin     end

rbegin() to rend()
abcdefghijk
|         |
rend      rbegin


*/
