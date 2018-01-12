/**-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11362 PHONE LIST
---------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        getchar();
        string s1;
        map<string,bool>mp1,mp2;
        map<string,bool>::iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>s1;
            mp1[s1]=true;
        }
        int b=0;
        for(it=mp1.begin();it!=mp1.end();it++)
        {
            string s3,s4;
            s3=it->first;
            int ln=s3.size();
            for(int j=0;j<ln;j++)
            {
                s4+=s3[j];
                if(mp2[s4])
                {
                    b=1;
                    break;
                }
            }
            if(b)break;
            mp2[s4]=true;
        }
        if(b)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
