/**-------------------------------------
    Md.Soharub Hossen
    Daffodil International University
    Problem: UVA 763 FIBINARY NUMBERS
  ------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
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
string SUB(string s1,string s2)
{
    string s3,final_result;
    int carry=0;
    int L1=s1.size();
    int L2=s2.size();
    for(int i=L1-1; i>=0; i--)
    {
        int num1=s1[i]-'0'-carry;
        int num2=0;
        if(L2)num2=s2[L2-1]-'0',L2--;
        if(num1<num2)num1+=10,carry=1;
        else carry=0;
        stringstream ss;
        ss<<(num1-num2)+'0';
        int result;
        ss>>result;
        s3+=result;
    }
    int ln=s3.size(),t=0;
    reverse(s3.begin(),s3.end());
    for(int i=0; i<ln; i++)
    {
        if(!t && s3[i]=='0')continue;
        t=1;
        final_result+=s3[i];
    }
    return final_result;
}
void fibo()
{
    F.pb("1");
    F.pb("2");
    for(int i=2; i<=mx; i++)F.pb(ADD(F[i-1],F[i-2]));
}
int compare(string s1,string s2)
{
    int L1=s1.size();
    int L2=s2.size();
    if(L1>L2)return 1;
    if(L1<L2)return 2;
    if(L1==L2)
    {
        for(int i=0; i<L1; i++)
        {
            if(s1[i]>s2[i])return 1;
            if(s1[i]<s2[i])return 2;
        }
        return 3;
    }
}
int main()
{
    fibo();
    int T=0;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        if(T)printf("\n");
        T++;
        if(s1=="0" && s2=="0")
        {
            printf("0\n");
            continue;
        }
        string result="0";
        int ln1=s1.size();
        int ln2=s2.size();
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        for(int i=0; i<ln1; i++)
        {
            if(s1[i]=='1')result=ADD(result,F[i]);
        }
        for(int i=0; i<ln2; i++)
        {
            if(s2[i]=='1')result=ADD(result,F[i]);
        }
        int L=0,a=-1;
        while(a!=1)
        {
            a=compare(F[L],result);
            L++;
        }
        string fb;
        int b=0;
        for(int i=L; i>=0; i--)
        {
            int a=compare(F[i],result);
            if(a==2)
            {
                b=1;
                fb+='1';
                result=SUB(result,F[i]);
            }
            if(a==3)b=1,fb+='1',result="0";
            if(a==1 && b)fb+='0';
        }
        cout<<fb<<endl;
    }
    return 0;
}