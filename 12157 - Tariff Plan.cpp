///Md.soharub hossen
///Daffodil international university


#include<bits/stdc++.h>
using namespace std;
int  mile(int n,int sum)
{
    while(n>29)
    {
        int x=n/30;
        sum+=x*10;
        n-=x*30;
    }
    return sum;
}
int juice(int n,int sum)
{
    while(n>59)
    {
        int x=n/60;
        sum+=x*15;
        n-=x*60;
    }
    return sum;
}
int main()
{
    int T=1;
    int t,n;
    int a[30];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int Mile=0,Juice=0;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            Mile+=mile(a[i],10);
            Juice+=juice(a[i],15);
        }
        if(Mile<Juice)printf("Case %d: Mile %d\n",T++,Mile);
        if(Mile>Juice)printf("Case %d: Juice %d\n",T++,Juice);
        if(Mile==Juice)printf("Case %d: Mile Juice %d\n",T++,Mile);
    }
    return 0;
}
