/** Md.soharub hossen
    Daffodil international university*/

#include<bits/stdc++.h>
using namespace std;
int POW(int a,int b)
{
    int sum=a;
    for(int i=1;i<b;i++)sum*=a;
    return sum;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        stringstream ss;
        string x;
        ss<<n;
        ss>>x;
        int ln=x.size();
        int sum=0;
        for(int i=0;i<ln;i++)
        {
            sum+=POW(x[i]-'0',ln);
        }
        if(sum==n)printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
