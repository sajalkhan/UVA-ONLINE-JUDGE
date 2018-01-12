/**
    AUTHOE : SAJAL KHAN
    PROBLEM: UVA 11321 SORT! SORT! AND SORT!
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b;
}srt[11111];
bool cmp(node i,node j)
{
    if(i.b==j.b)
    {
        int x=abs(i.a),y=abs(j.a);
        if(x&1 && y%2==0)return true;
        if(x%2==0 && y&1)return false;
        if(x&1 && y&1)return i.a>j.a;
        if(x%2==0 && y%2==0)return i.a<j.a;
    }
    return i.b<j.b;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n,m,x;
    while(~scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
        {
            printf("0 0\n");
            break;
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            srt[i].a=x;
            srt[i].b=x%m;
        }
        sort(srt,srt+n,cmp);
        printf("%d %d\n",n,m);
        for(int i=0; i<n; i++)printf("%d\n",srt[i].a);
    }
    return 0;
}
