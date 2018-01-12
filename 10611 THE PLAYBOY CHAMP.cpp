/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int a[500005];
int start,End,n;

int binary_search(int n,int k)
{
    start=1;
    End=n;
    while(start<=End)
    {
        int mid=(start+End)/2;
        if(a[mid]==k)return mid;
        if(a[mid]<k)start=mid+1;
        else if(a[mid]>k)End=mid-1;
    }
    return -1;
}

int main()
{
    int m,k,z,j=1;
    memset(a,-1,sizeof(a));
    scanf("%d",&n);
    map<int,bool>mp;
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&z);
        if(!mp[z])
        {
            a[j++]=z;
            mp[z]=true;
        }
    }
    scanf("%d",&m);
    for(int i=0; i<m; i++)
    {
        scanf("%d",&k);
        int result=binary_search(j,k);
        if(result!=-1)
        {
            int x=a[result+1];
            int y=a[result-1];
            if(y!=-1)printf("%d ",y);
            else printf("X ");
            if(x!=-1)printf("%d\n",x);
            else printf("X\n");
        }
        if(result<0)
        {
            int x=a[End];
            int y=a[start];
            if(x!=-1 && y!=-1)printf("%d %d\n",x,y);
            if(x!=-1 && y==-1)printf("%d X\n",x);
            if(x==-1 && y!=-1)printf("X %d\n",y);
            if(x==-1 && y==-1)printf("%d X\n",a[End-1]);
        }
    }
    return 0;
}
