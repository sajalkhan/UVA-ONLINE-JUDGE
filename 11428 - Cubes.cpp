/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int b=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            for(int j=1;j<=i;j++)
            {
                if((i*i*i-j*j*j)==n)
                {
                    b=1;
                    printf("%d %d\n",i,j);
                    break;
                }
            }
            if(b)break;
        }
        if(!b)printf("No solution\n");
    }
    return 0;
}
