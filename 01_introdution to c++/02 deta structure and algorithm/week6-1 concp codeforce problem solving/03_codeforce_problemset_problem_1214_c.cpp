#include<bits/stdc++.h>
using namespace std;
/*
chack the braket wether valid or not.
input
10
)))))(((((

input
2
()

input
2
)(


output
NO

output
YES

output
YES

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        if(i == 0)
            st.push(s[i]);
        else
        {
          if(st.empty() >= 1 && st.top() == '(' && s[i] == ')')
                st.pop();

            st.push(s[i]);
        }
    }
    int open = 0, close = 0;
    while(st.empty() == false)
    {
        if(st.top() == '(' )
            open++;
        else
            close++;

        st.pop();
    }
    // chack 0 and only 1 move can  acceptable.
    if((open == 0 && close == 0) || (open == 1 && close == 1))
        cout<< "YES\n";
    else
        cout<< "NO\n";


    return 0;
}
