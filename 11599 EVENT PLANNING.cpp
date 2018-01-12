/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11599 EVENT PLANNING
-------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,h,w;
    while(~scanf("%d %d %d %d",&n,&b,&h,&w))
    {
        int found=0;
        int cost,result=999999,bed;
        for(int i=0;i<h;i++)
        {
            scanf("%d",&cost);
            for(int j=0;j<w;j++)
            {
                scanf("%d",&bed);
                if(bed>=n)
                {
                    int sum=cost*n;
                    if(result>sum && sum<=b)
                    {
                        found=1;
                        result=sum;
                    }
                }
            }
        }
        if(found)printf("%d\n",result);
        else printf("stay home\n");
    }
    return 0;
}
