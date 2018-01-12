/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    while(cin>>s2 && s2!="0")
    {
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
        for(int i=M-1; i>=0; i--)
        {
            s1+=c[i]+'0';
        }
    }
    cout<<s1<<endl;
    return 0;
}