/*-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 974 KAPREKAR NUMBERS
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int ar[400005];
void number()
{
    for(int i=2; i<=40005; i++)
    {
        vector<int>v;
        long long m=i*i;
        while(m)
        {
            v.push_back(m%10);
            m/=10;
        }
        int ln=v.size(),a=0,b=0;
        reverse(v.begin(),v.end());
        for(int j=0; j<ln; j++)
        {
            a=a*10+v[j];
            b=0;
            for(int k=j+1; k<ln; k++)b=b*10+v[k];
            if(a && b && a+b==i)
            {
                ar[i]=1;
                break;
            }
        }
    }
}
int main()
{
    number();
    int t,a,b,test=1;
    scanf("%d",&t);
    while(t--)
    {
        int found=0;
        scanf("%d %d",&a,&b);
        printf("case #%d\n",test++);
        for(int i=a;i<=b;i++)
        {
            if(ar[i]==1)
            {
                printf("%d\n",i);
                found=1;
            }
        }
        if(!found)printf("no kaprekar numbers\n");
        if(t)printf("\n");
    }
    return 0;
}
