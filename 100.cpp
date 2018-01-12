#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,count=0,result=0;
    cin>>n>>m;
    if(n>m)
    {
        int temp=n;
        n=m;
        m=temp;
    }
    while(n<=m)
    {
        count=0;
        while(1)
        {
            count++;
            if(result<count)
            {
                result=count;
            }
            if(n==1)
            {
                break;
            }
            if(n&1)
            {
                n=3*n+1;
            }
            else
            {
                n=n/2;
            }
        }
        n++;
    }
    cout<<n<<" "<<m<<" "<<result<<endl;
    return 0;
}
