#include<bits/stdc++.h>
using namespace std;
/*
problem to solve
    5       test case
    4       test case 1
    QQAA
    4       test case 2
    QQAQ
    3       test case 3
    QAA
    1       test case 4
    Q
    14      test case 5
    QAQQAQAAQQQAAA

solved

    Yes
    No
    Yes
    No
    Yes

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

         stack<char> st;
        // string traverse
        for(int i=0; i<n; i++)
        {
          char c = s[i];

          if(c == 'Q')
            st.push(c);
          else
          {
              // c == A

              if(st.empty() == false)
              {
                    st.pop();
                }
            }
        }

        if(st.empty() == true)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }



    return 0;
}
