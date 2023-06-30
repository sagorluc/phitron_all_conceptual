#include<bits/stdc++.h>
using namespace std;

////built-in function.
//int max(int a, int b)
//{
//    if(a>b)
//        return a;
//    else
//        return b;
//}

int main()
{

    int a = 86, b = 100, c = 165;

//    int mn = min(a,b);
//    cout<<mn<<"\n";

    int mnn = min({a,b,c});
    int mnnn = min(a,min(b,c));
    cout<<mnn<<"\n";
    cout<<mnnn<<"\n";

//    int mx = max(a,b);
//    cout<<mx<<"\n";

    int mxx = ({a,b,c});
    int mxxx = max(a,max(b,c));
    cout<<mxx<<"\n";
    cout<<mxxx<<"\n";



//    int a = 56, b = 120;
//    int mn;
//    int mx;
//    if(a<b)
//    {
//        mn = a;
//    }
//    else
//    {
//        mn= b;
//    }
//    cout<<mn<<"\n";

    return 0;
}
