/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    scanf("%ld",&n);
    for(int i=0; i<n; i++)
    {
        string s1,s2;
        while(cin>>s1>>s2)
        {
            int a[10000]= {0},b[10000]= {0},c[10000]= {0};
            int I=0,J=0;
            for(int i=0; i<s1.size(); i++)a[i]=s1[i]-'0';
            for(int i=0; i<s2.size(); i++)b[i]=s2[i]-'0';
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
            int B=0;
            for(int i=0; i<M; i++)
            {
                if(!B && c[i]==0)continue;
                if(c[i]!=0 && !B)
                {
                    B=1;
                    cout<<c[i];
                    continue;
                }
                if(B)cout<<c[i];
            }
            cout<<endl;
        }
    }
    return 0;
}