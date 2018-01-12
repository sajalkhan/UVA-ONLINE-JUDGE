/*-------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10810 ULTRA QUICKSORT
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define mx 1000000
#define inf 200000000
long a[mx],L[mx/2],R[mx/2],Total;
void merge(int p,int q,int r)
{
    int LS=1,RS=1;
    for(int i=p;i<=q;i++)L[LS++]=a[i];
    L[LS]=inf;
    for(int i=q+1;i<=r;i++)R[RS++]=a[i];
    R[RS]=inf;
    int i=1,j=1;
    for(int k=p;k<=r;k++)
    {
        if(L[i]>R[j])
        {
            Total+=LS-i;
            a[k]=R[j++];
        }
        else a[k]=L[i++];
    }
}
void mergesort(int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(p,q);
        mergesort(q+1,r);
        merge(p,q,r);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        Total=0;
        for(int i=1;i<=n;i++)scanf("%ld",&a[i]);
        mergesort(1,n);
        printf("%ld\n",Total);
    }
    return 0;
}
