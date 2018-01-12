/*----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11743 CREDIT CHECK
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,card_no[20],changed_no[10];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s;
        int I=1,unchanged=0,changed=0;
        getline(cin,s);
        int ln=s.size();
        for(int i=0;i<ln;i++)if(isdigit(s[i]))card_no[I++]=s[i]-'0';
        I=0;
        for(int i=15;i>=1;i-=2)changed_no[I++]=card_no[i]*2;
        for(int i=16;i>=2;i-=2)unchanged+=card_no[i];
        for(int i=0;i<I;i++)
        {
            int n=changed_no[i];
            while(n)
            {
                changed+=n%10;
                n/=10;
            }
        }
        int n=changed+unchanged;
        int valid=n%10;
        if(!valid)printf("Valid\n");
        else printf("Invalid\n");
    }
    return 0;
}
