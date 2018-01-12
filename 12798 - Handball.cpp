#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            int result=0,x;
            for(int j=0;j<m;j++)
            {
                scanf("%d",&x);
                if(x)result++;
            }
            if(result==m)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
