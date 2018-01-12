#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    int i=1;
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='*')
        {
            break;
        }
        else if(s[0]=='H' || s[0]=='h')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
        }
    }
    return 0;
}
