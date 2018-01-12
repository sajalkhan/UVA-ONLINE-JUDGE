#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int t,n,m;
    scanf("%d",&t);
    getchar();
    for(int I=1;I<=t;I++)
    {
        int a,b=0;
        scanf("%d",&a);
        gets(s);
        for(int i=0;i<strlen(s)-1;i++)
        {
            if(isdigit(s[i]))
            {
                b=b*10+(s[i]-'0');
            }
        }
        printf("Case %d: %g\n",I,(double)a*.5+(double)b*.05);
    }
    return 0;
}
