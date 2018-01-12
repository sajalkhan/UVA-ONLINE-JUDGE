/*-------------------------------------
    Md.Soharub Hossen
    Daffodil International University
    Problem: UVA 10183 how many fibs
  ------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 10000
vector<string>F;
string ADD(string s1,string s2)
{
    string s3;
    int a[10000]= {0},b[10000]= {0},c[10000]= {0};
    int I=0,J=0;
    for(int i=s1.size()-1; i>=0; i--)a[i]=s1[I++]-'0';
    for(int i=s2.size()-1; i>=0; i--)b[i]=s2[J++]-'0';
    int M=max(s1.size(),s2.size());
    for(int i=0; i<M; i++)
    {
        int sum=a[i]+b[i];
        if(sum>9)
        {
            c[i]=sum%10;
            a[i+1]+=1;
            if(i==M-1)M++;
        }
        else c[i]=sum;
    }
    for(int i=M-1; i>=0; i--)s3+=c[i]+'0';
    return s3;
}
void fibo()
{
    F.pb("1");
    F.pb("2");
    for(int i=2; i<=mx; i++)F.pb(ADD(F[i-1],F[i-2]));
}
int cmp(string a,string b)
{
    int L1=a.size();
    int L2=b.size();
    if(L1<L2)return 1;
    if(L1>L2)return 2;
    else
    {
        for(int i=0;i<L1;i++)
        {
            if(a[i]<b[i])return 1;
            if(a[i]>b[i])return 2;
        }
        return 3;
    }
}
int main()
{
    fibo();
    string n,m;
    while(cin>>n>>m)
    {
        if(n=="0" && m=="0")break;
        int i=0,count=0;
        int b=0;
        while(b=cmp(F[i],m))
        {
            if(b==2)break;
            int T=cmp(F[i],n);
            if(T==3 || T==2)count++;
            i++;
        }
        printf("%d\n",count);
    }
    return 0;
}
