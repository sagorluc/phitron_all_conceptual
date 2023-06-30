#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        // prottek ta character nite hobe
        char c = s[i];

        // prottekta character ke stack e push korte hobe

        if(c == '(' || c == '{' || c == '[')
        st.push(c);

        // stack e jodi kicu thake and stack e rakha opening bracket jodi closing bracket er shathe match hoy tahole remove kore debo.
        else if( c == ')' && st.empty() == false && st.top() == '(')
            st.pop();

        else if( c == '}' && st.empty() == false && st.top() == '{')
            st.pop();

        else if( c == ']' && st.empty() == false && st.top() == '[')
            st.pop();

        // middle code e match na hole direct else part e push hobe
        else
            st.push(c);
    }

    if(st.empty() == true)
        cout<< "true\n";
    else
        cout<< "false\n";


    return 0;
}
