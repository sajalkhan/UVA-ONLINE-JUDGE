/**--------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10611 THE PLAYBOY CHAMP
----------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m,q,x;
    map<int,bool>mp;
    map<int,bool>::iterator it;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        mp[m]=true;
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        int num1=-1,num2=-1;
        scanf("%d",&x);
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->first<x)num1=it->first;
            if(it->first>x)
            {
                num2=it->first;
                break;
            }
        }
        if(num1!=-1)printf("%d ",num1);
        else printf("X ");
        if(num2!=-1)printf("%d\n",num2);
        else printf("X\n");
    }
    return 0;
}
