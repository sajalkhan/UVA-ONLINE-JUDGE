/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define max 10000000
#define pb push_back
bool isprime[max];
void sieve()
{
    isprime[1]=true;
    for(long i=4;i<=max;i+=2)isprime[i]=true;
    for(long i=3; i*i<=max; i+=2)
    {
        if(!isprime[i])
        {
            for(long j=i*i; j<=max; j+=2*i)isprime[j]=true;
        }
    }
}
int main()
{
    sieve();
    string s;
    while(cin>>s && s!="0")
    {
        int result=0;
        int ln=s.size();
        for(int i=0;i<ln;i++)
        {
            int prime=0;
            for(int j=i;j<ln;j++)
            {
                prime=10*prime+s[j]-'0';
                if(prime>100000)break;
                if(!isprime[prime] && result<prime)result=prime;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}