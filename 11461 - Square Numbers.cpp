#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) && (a||b))
    {
        int count=0;
        for(int i=a;i<=b;i++)
        {
            double n=sqrt(i);
            int x,y;
            x=n;
            n-=x;
            if(x && n==0.0)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
