/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&m);
        map<int,int>mp;
        for(int j=1; j<=m; j++)
        {
            if(j<10)mp[j]++;
            else
            {
                int k=j;
                while(k)
                {
                    int m1=k%10;
                    k/=10;
                    mp[m1]++;
                }
            }
        }
        for(int i=0; i<=9; i++)
        {
            if(i<9)
            {
                if(!mp[i])printf("0 ");
                else cout<<mp[i]<<" ";
            }
            else if(i==9)
            {
                if(!mp[i])printf("0\n");
                else cout<<mp[i]<<endl;
            }
        }
    }
    return 0;
}