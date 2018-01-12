/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[1001];
    s[0]="1";
    s[1]="2";
    s[2]="5";
    for(int i=3; i<=1000; i++)
    {
        int n=3;
        string s1=s[i-1],s2=s[i-2];
        while(n--)
        {
            if(n==1)s2=s[i-3];
            if(n==0)s2=s[i-1];
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
            s1.clear();
            s2.clear();
            for(int i=M-1; i>=0; i--)
            {
                s1+=c[i]+'0';
            }
        }
        s[i]=s1;
    }
    int n;
    while(cin>>n)cout<<s[n]<<endl;
    return 0;
}