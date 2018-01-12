#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        int coke=0;
        int bottol=1;
        while(bottol!=n)
        {
            bottol++;
            if(bottol%3==0)
            {
                bottol=1;
                coke++;
                ++n;
                n-=3;
            }
        }
        if(bottol==2)coke++;
        printf("%d\n",coke);
    }
    return 0;
}
