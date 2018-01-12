///Md.soharub hossen
///Daffodil international university

#include<bits/stdc++.h>
using namespace std;

#define mx 1000001
bool visit[mx];
int main()
{
    for(int i=1;i<=mx;i++)
    {
        int num=i,sum=0;
        while(num)
        {
            sum+=num%10;
            num/=10;
        }
        if(sum+i<=mx)visit[sum+i]=1;
    }
    for(int i=1;i<=mx;i++)if(!visit[i])printf("%d\n",i);
    return 0;
}
