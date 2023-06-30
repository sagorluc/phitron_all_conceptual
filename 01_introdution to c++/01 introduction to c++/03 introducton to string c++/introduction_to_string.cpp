#include<bits/stdc++.h>
using namespace std;
int main()
{
    //dyanamic vhabe memory barbe kombe.
    string st; //dynamic array.
    st = "jklgj";
    cout<<"total capacity = "<<st.capacity()<<"\n";
    cout<<"total size = "<<st.size()<<"\n";

    st = "kjsfkljgloirkiorujkfk";
    cout<<"total capacity = "<<st.capacity()<<"\n";
    cout<<"total size = "<<st.size()<<"\n";

    string s ="sagor";
    string s1 =" ahmed";
    s = s1;
    string s2 = s+s1;
    cout<<s<<"\n";
    cout<<s2<<"\n";

    if(s == s2)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

    return 0;
}
