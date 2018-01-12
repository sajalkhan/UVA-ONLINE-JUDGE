/** Md.soharub hossen
    Daffodil international university*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8],b[8],c,d,e,f,g;
    while(scanf("%d %d %d %d %d",&c,&d,&e,&f,&g)!=EOF)
    {
        a[0]=c;
        a[1]=d;
        a[2]=e;
        a[3]=f;
        a[4]=g;
        for(int i=0; i<5; i++)scanf("%d",&b[i]);
        int x=0;
        for(int i=0; i<5; i++)
        {
            if((a[i] && b[i]) || (!a[i] && !b[i]))
            {
                x=1;
                break;
            }
        }
        if(!x)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
