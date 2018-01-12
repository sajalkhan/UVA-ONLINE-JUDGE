#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&x,&y);
            if(x>y)
            {
                printf(">\n");
            }
            else if(x<y)
            {
                printf("<\n");
            }
            else
                printf("=\n");
        }
    }
    return 0;
}
