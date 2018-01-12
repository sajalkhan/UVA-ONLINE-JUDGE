/**------------------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11991 EASY PROBLEM FROM RUJIA LIU
--------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int a[1000011];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m,k,v;
    while(~scanf("%d %d",&n,&m))
    {
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            int count=0,result=0;
            scanf("%d %d",&k,&v);
            if(mp[v]>=k)
            {
                for(int j=0; j<n; j++)
                {
                    result++;
                    if(a[j]==v)count++;
                    if(count==k)break;
                }
                printf("%d\n",result);
            }
            else printf("0\n");
        }
    }
    return 0;
}
