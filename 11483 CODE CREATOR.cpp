/*----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11483 CODE CREATOR
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
void code(string s,int n)
{
    if(!n)
    {
        printf("#include<string.h>\n");
        printf("#include<stdio.h>\n");
        printf("int main()\n{\n");
    }
    printf("printf(\"");
    int ln=s.size();
    for(int i=0; i<ln; i++)
    {
        if(s[i]=='\\')
        {
            printf("\\");
            cout<<s[i];
            continue;
        }
        if(s[i]=='"')
        {
            printf("\\");
            cout<<s[i];
            continue;
        }
        cout<<s[i];
    }
    printf("\\");
    printf("n\");\n");
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,test=1;
    while(scanf("%d",&n)&& n)
    {
        string s;
        getchar();
        printf("Case %d:\n",test++);
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            code(s,i);
        }
        printf("printf(\"");
        printf("\\n\");\n");
        printf("return 0;\n");
        printf("}\n");
    }
    return 0;
}
