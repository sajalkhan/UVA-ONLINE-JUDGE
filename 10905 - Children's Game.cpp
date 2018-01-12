/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
bool cmp(string i,string j)
{
    return (i+j)>(j+i);
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        string s;
        string num[100];
        for(int i=0; i<n; i++)cin>>num[i];
        sort(num,num+n,cmp);
        for(int i=0; i<n; i++)cout<<num[i];
        printf("\n");
    }
    return 0;
}
