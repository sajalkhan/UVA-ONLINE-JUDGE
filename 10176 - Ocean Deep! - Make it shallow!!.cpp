///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    char ch;
    long long num;
    while(cin>>ch)
    {
        num=0;
        num+=ch-'0';
        while(cin>>ch && ch!='#')
        {
            num*=2;
            num+=ch-'0';
            num%=131071;
        }
        if(!num)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
