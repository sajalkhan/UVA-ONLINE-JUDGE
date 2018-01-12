#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    int i;
    for(i=1;; i++)
    {
        while(gets(s))
        {
            if(s[0]=='#')
            {
                return 0;
            }
            if(strcmp(s,"HELLO")==0)
            {
                printf("Case %d: ENGLISH\n",i);
            }
            else if(strcmp(s,"HOLA")==0)
            {
                printf("Case %d: SPANISH\n",i);
            }
            else if(strcmp(s,"HALLO")==0)
            {
                printf("Case %d: GERMAN\n",i);
            }
            else if(strcmp(s,"BONJOUR")==0)
            {
                printf("Case %d: FRENCH\n",i);
            }
            else if(strcmp(s,"CIAO")==0)
            {
                printf("Case %d: ITALIAN\n",i);
            }
            else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            {
                printf("Case %d: RUSSIAN\n",i);
            }
            else //if(strcmp(s,"ZDRAVSTVUJTE")!=0 && strcmp(s,"CIAO")!=0 && strcmp(s,"BONJOUR")!=0 && strcmp(s,"HALLO")!=0 && strcmp(s,"HOLA")!=0 && strcmp(s,"HELLO")!=0)
            {
                printf("Case %d: UNKNOWN\n",i);
            }
            break;
        }
    }
    return 0;
}
