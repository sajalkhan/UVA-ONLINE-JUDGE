/**--------------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11734 BIG NUMBER OF TEAMS WILL SOLVE THIS
----------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,T=1;
    string s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        getline(cin,s1);
        cin>>s2;
        if(s1==s2)printf("Case %d: Yes\n",T++);
        else
        {
            string s3;
            int ln=s1.size();
            for(int i=0; i<ln; i++)
            {
                if(s1[i]==' ')continue;
                s3+=s1[i];
            }
            if(s3==s2)printf("Case %d: Output Format Error\n",T++);
            else printf("Case %d: Wrong Answer\n",T++);
        }
    }
    return 0;
}
