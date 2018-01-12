#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s,d,sum=0,div=0;
    scanf("%lld",&n);
    for(int i=0; i<n; i++)
    {
    	sum=0,div=0;
        scanf("%lld %lld",&s,&d);
        if(s<d)
        {
            printf("impossible\n");
        }
        else
        {
            sum=(s+d)/2;
			div=s-sum;
			if(sum-div==d)
			{
				printf("%lld %lld\n",sum,div);
			}
			else printf("impossible\n");
        }
    }
    return 0;
}
