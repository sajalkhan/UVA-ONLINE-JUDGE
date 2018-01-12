/// 11727 - Cost Cutting
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        long int e1,e2,e3;
        scanf("%ld %ld %ld",&e1,&e2,&e3);
        if(e1<e2 && e2<e3)
        {
            printf("Case %d: %ld\n",i+1,e2);
        }
        else if(e1>e2 && e2>e3)
        {
            printf("Case %d: %ld\n",i+1,e2);
        }
        else if(e1>e2 && e2<e3 && e1<e3)
        {
            printf("Case %d: %ld\n",i+1,e1);
        }
         else if(e1<e2 && e2>e3 && e1>e3)
        {
            printf("Case %d: %ld\n",i+1,e1);
        }
        else if(e1>e2 && e1>e3 && e3>e2)
        {
            printf("Case %d: %ld\n",i+1,e3);
        }
         else if(e1<e2 && e2>e3 && e3>e1)
        {
            printf("Case %d: %ld\n",i+1,e3);
        }

    }
    return 0;
}
