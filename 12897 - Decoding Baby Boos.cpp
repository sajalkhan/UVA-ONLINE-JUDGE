///Md.soharub hossen
///Daffodil international university


#include<bits/stdc++.h>
using namespace std;
//struct node
//{
//    char a,b;
//};
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n;
    char x,y;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        int ln=s.size();
        scanf("%d",&n);
        char word[201];
        for(int i=0;i<=200;i++)word[i]=i;
//        node Map[100000];
//        map<char,int>mp1,mp2;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y;
            for(int j='A';j<='Z';j++)
            {
                if(word[j]==y)
                {
                    word[j]=x;
                }
            }
//            if(!mp1[y])mp1[y]=i;
//            if(mp1[y])mp2[y]=i;
//            Map[i].a=x;
//            Map[i].b=y;
        }
        for(int i=0;i<ln;i++)
        {
            printf("%c",word[s[i]]);
        }
        printf("\n");
//        string result;
//        for(int i=0;i<ln;i++)
//        {
//            if(mp1[s[i]])
//            {
//                for(int j=mp1[s[i]];j<=mp2[s[i]];j++)
//                {
//                    if(Map[j].b==s[i])
//                    {
//                        s[i]=Map[j].a;
//                    }
//                }
//                printf("%c",s[i]);
//            }
//            else printf("%c",s[i]);
//        }
//        printf("\n");
    }
    return 0;
}
