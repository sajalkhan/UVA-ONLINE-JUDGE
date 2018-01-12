/*-------------------------------------
    Md.Soharub Hossen
    Daffodil International University
    Problem: UVA 10334 Ray Through Glasses
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
int main()
{
    fibo();
    long long n;
    while(cin>>n)
    {
        cout<<F[n]<<endl;
    }
    return 0;
}
