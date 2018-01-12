#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,n;
    scanf("%llu",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%llu",&n);
        unsigned long long count=0;
        unsigned long long result=0,sum=0,r1=0,r2=1;
        while(1)
        {
            int m=n;
            result=0;
            while(n!=0)
            {
                result=result*10+(n%10);
                n/=10;
            }
            n=m+result;
            if(!r1)
            {
                r1=n;
                r2=0;
                continue;
            }
            if(!r2)
            {
                r2=result;
                if(r1!=r2)
                {
                    n=r1+r2;
                    r1=n;
                    r2=0;
                    count++;
                }
                else if(r1==r2)
                {
                    count++;
                    break;
                }
            }
        }
        printf("%llu %llu\n",count,r2);
    }
}
