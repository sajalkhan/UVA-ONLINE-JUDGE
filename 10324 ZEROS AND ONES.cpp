/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10324 ZEROS AND ONES
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,x,y,I=1;
    string s;
    while(cin>>s)
    {
        int ln=s.size();
        scanf("%d",&n);
        printf("Case %d:\n",I++);
        for(int i=0;i<n;i++)
        {
            int b=0;
            string r;
            scanf("%d %d",&x,&y);
            if(x>y)swap(x,y);
            r+=s[x];
            for(int j=x+1;j<=y;j++)
            {
                if(r[0]!=s[j])
                {
                    b=1;
                    break;
                }
            }
            if(!b)printf("Yes\n");
            if(b)printf("No\n");
        }
    }
    return 0;
}
