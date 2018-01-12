/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        int count=0;
        while(n!=0)
        {
            if(n&1)
            {
                if(n==1)n=0,count++;
                if(n==3)n=0,count+=3;
                if(n)
                {
                    long long m1=(n-1)/2;
                    long long m2=(n+1)/2;
                    if(m1%2==0)n-=1,count++;
                    if(m2%2==0)n+=1,count++;
                }
            }
            else n/=2,count++;
        }
        printf("%d\n",count);
    }
    return 0;
}