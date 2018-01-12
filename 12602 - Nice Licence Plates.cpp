///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    char a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0;
        cin>>a>>b>>c>>d>>n;
        sum+=(a-'A')*pow(26,2);
        sum+=(b-'A')*pow(26,1);
        sum+=(c-'A')*pow(26,0);
        sum=abs(sum-n);
        if(sum<=100)printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
