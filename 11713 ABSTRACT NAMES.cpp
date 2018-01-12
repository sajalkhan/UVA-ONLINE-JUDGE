/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11713 ABSTRACT NAMES
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int vowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;
    else return false;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,T=1;
    string s1,s2;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>s1>>s2;
        int ln1=s1.size();
        int ln2=s2.size();
        if(ln1==ln2)
        {
            bool flag=false;
            for(int i=0;i<ln1;i++)
            {
                if(vowel(s1[i])==true)
                {
                    if(vowel(s2[i])==true)
                    {
                        flag=false;
                    }
                    else
                    {
                        flag=true;
                        break;
                    }
                }
                else if(s1[i]!=s2[i])
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
    return 0;
}
