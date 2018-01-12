///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    unsigned long long n,m;
    while(scanf("%llu",&n)==1)
    {
        m=9;
        if(n<=9)printf("Stan wins.\n");
        else
        {
            int count=1;
            while(m<n)
            {
                if(count&1)m*=2;
                else m*=9;
                count++;
            }
            if(count&1)printf("Stan wins.\n");
            else printf("Ollie wins.\n");
        }
    }
    return 0;
}
