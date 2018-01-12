#include<bits/stdc++.h>
using namespace std;
int sum(int n,int result)
{
    while(n)
    {
        result+=n%10;
        n/=10;
    }
    if(result<10)return result;
    return sum(result,0);
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int ln1=s1.size();
        int ln2=s2.size();
        int sum1=0,sum2=0,R1=0,R2=0;
        for(int i=0; i<ln1; i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')sum1+=(s1[i]-'A')+1;
            if(s1[i]>='a' && s1[i]<='z')sum1+=(s1[i]-'a')+1;
        }
        for(int i=0; i<ln2; i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')sum2+=(s2[i]-'A')+1;
            if(s2[i]>='a' && s2[i]<='z')sum2+=(s2[i]-'a')+1;
        }
        R1=sum(sum1,0);
        R2=sum(sum2,0);
        if(R1<=R2 &&(sum1||sum2))printf("%.2f %%\n",float(R1*100.0)/float(R2));
        else if(R1>R2 &&(sum1 ||sum2))printf("%.2f %%\n",float(R2*100.0)/float(R1));
        else printf("\n");
    }
    return 0;
}
