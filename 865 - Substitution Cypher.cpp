/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        int b=0;
        map<char,char>mp;
        map<char,bool>ck;
        string x,y;
        while(getline(cin,x) && x.size())
        {
            if(!b)
            {
                getline(cin,y);
                int ln=x.size();
                for(int i=0;i<ln;i++)mp[x[i]]=y[i],ck[x[i]]=true;
                cout<<y<<endl;
                cout<<x<<endl;
                b=1;
            }
            else
            {
                int ln=x.size();
                for(int i=0;i<ln;i++)
                {
                    if(ck[x[i]])printf("%c",mp[x[i]]);
                    else printf("%c",x[i]);
                }
                printf("\n");
            }
        }
        if(t)printf("\n");
    }
    return 0;
}
