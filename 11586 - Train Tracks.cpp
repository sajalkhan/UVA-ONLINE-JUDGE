#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int M=0;
        int F=0;
        string s;
        getline(cin,s);
        int ln=s.size();
        for(int i=0;i<ln;i++)
        {
            if(s[i]=='M')M++;
            if(s[i]=='F')F++;
        }
        if(M==F && (M+F)/2>=2)printf("LOOP\n");
        else printf("NO LOOP\n");
    }
    return 0;
}
