/**-----------------------------------**
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10530 GUESSING GAME
**------------------------------------**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m;
    string s;
    int a[12],b[20];
    memset(b,0,sizeof(b));
    for(int i=1; i<=10; i++)a[i]=i;
    while(scanf("%d",&n) && n)
    {
        getchar();
        getline(cin,s);
        if(s=="too high")
        {
            for(int i=n; i<=10; i++)
            {
                if(!b[a[i]])
                {
                    b[a[i]]=1;
                }
            }
        }
        if(s=="too low")
        {
            for(int i=1; i<=n; i++)
            {
                if(!b[a[i]])b[a[i]]=1;
            }
        }
        if(s=="right on")
        {
            if(b[n])printf("Stan is dishonest\n");
            else printf("Stan may be honest\n");
            memset(b,0,sizeof(b));
        }
    }
    return 0;
}
