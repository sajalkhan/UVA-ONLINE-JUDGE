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
        while(n--)
        {
            int count=0,x,y;
            char question[]= {' ','A','B','C','D','E'};
            for(int i=1; i<=5; i++)
            {
                scanf("%d",&x);
                if(x<=127)
                {
                    y=i;
                    count++;
                }
            }
            if(count>1 || !count)printf("*\n");
            else printf("%c\n",question[y]);
        }
    }
    return 0;
}
