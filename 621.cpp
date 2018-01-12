#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,s1;
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int S=s.size();
        if(S<=2)
        {
            if(S==1 && (s[0]=='1' || s[0]=='4'))printf("+\n");
            else if(S==2 && (s[0]=='7' && s[1]=='8'))printf("+\n");
        }
        else if(S>2)
        {
            if(s[S-1]=='5' && s[S-2]=='3')printf("-\n");
            else if(s[0]=='9' && s[S-1]=='4')printf("*\n");
            else if(s[0]=='1' && s[1]=='9' && s[2]=='0')printf("?\n");
        }
    }
    return 0;
}
/*
4
78784135
78784135
1
*/
