/*-------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 13097 - Tobby and the LED display
--------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
char s1[1000007],s2[1000007],s3[1000007];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    long long n,t;
    char d;
    while(~scanf("%lld %lld %c",&n,&t,&d))
    {
        getchar();
        gets(s1);
        gets(s2);
        gets(s3);
        if(d=='R')
        {
            puts(s1);
            map<int,char>mp;
            map<int,bool>check;
            int ln=strlen(s2);
            for(int i=0; i<ln; i++)
            {
                if(s2[i]!=' ' &&  s2[i]!='|')
                {
                    char x=s2[i];
                    int m=t%n;
                    long n=i+(m*2);
                    if(n<=ln-1)
                    {
                        mp[n]=x;
                        check[n]=true;
                    }
                    else
                    {
                        long p=n-(ln-1);
                        mp[p]=x;
                        check[p]=true;
                    }
                }
            }
            for(int i=0; i<ln; i++)
            {
                if(check[i])printf("%c",mp[i]);
                else
                {
                    if(s2[i]=='|')printf("|");
                    else printf(" ");
                }
            }
            printf("\n");
            puts(s3);
        }
        if(d=='L')
        {
            puts(s1);
            map<int,char>mp;
            map<int,bool>check;
            int ln=strlen(s2);
            for(int i=0; i<ln; i++)
            {
                if(s2[i]!=' ' && s2[i]!='|')
                {
                    char x=s2[i];
                    int m=t%n;
                    long n=i-(m*2);
                    if(n>=1)
                    {
                        mp[n]=x;
                        check[n]=true;
                    }
                    else
                    {
                        n+=(ln-1);
                        mp[n]=x;
                        check[n]=true;
                    }
                }
            }
            for(int i=0; i<ln; i++)
            {
                if(check[i])printf("%c",mp[i]);
                else
                {
                    if(s2[i]=='|')printf("|");
                    else printf(" ");
                }
            }
            printf("\n");
            puts(s3);
        }
    }
    return 0;
}
/*

12 99999999999876 L
+–––––––––––––––––––----+
|T|T|o|b|b|y|!||| | | | |
+–––––––––––––––––––----+

10 14 R
+–––––––––––––––––––+
| | | |T|o|b|b|y|!|!|
+–––––––––––––––––––+

*/
