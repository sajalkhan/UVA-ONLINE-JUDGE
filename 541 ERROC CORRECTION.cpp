/*
    AUTHOR: SAJAL KHAN
    PROBLEM: UVA 541 ERROC CORRECTION
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[110][110];
    while(scanf("%d",&n) && n)
    {
        int b=0,t=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)scanf("%d",&a[i][j]);
        }
        int i,I=0,J=0;
        for(i=0; i<n; i++)
        {
            int r=0,c=0;
            for(int l=0; l<n; l++)r+=a[i][l];
            if(r&1 && !b)
            {
                bool balance=false;
                for(int j=0; j<n; j++)
                {
                    if(a[i][j] || !a[i][j])
                    {
                        c=0;
                        for(int k=0; k<n; k++)c+=a[k][j];
                        if(c&1 && !b)
                        {
                            balance=true;
                            if(a[i][j])a[i][j]=0;
                            else a[i][j]=1;
                            I=i+1;
                            J=j+1;
                            b=1;
                            break;
                        }
                    }
                }
                if(!balance)
                {
                    t=1;
                    break;
                }
            }
            else if(r&1 && b)
            {
                t=1;
                break;
            }
            c=0;
            for(int k=0; k<n; k++)c+=a[k][i];
            if(c&1 && !b)
            {
                bool balance=false;
                for(int k=0; k<n; k++)
                {
                    if(a[k][i]==1 || a[k][i]==0)
                    {
                        r=0;
                        for(int j=0; j<n; j++)r+=a[k][j];
                        if(r&1 && !b)
                        {
                            if(a[k][i])a[k][i]=0;
                            else a[k][i]=1;
                            balance=true;
                            I=k+1;
                            J=i+1;
                            b=1;
                            break;
                        }
                    }
                }
                if(!balance)
                {
                    t=1;
                    break;
                }
            }
            else if(c&1 && b)
            {
                t=1;
                break;
            }
        }
        if(t)printf("Corrupt\n");
        if(!t)
        {
            if(!I && !J)printf("OK\n");
            else printf("Change bit (%d,%d)\n",I,J);
        }
    }
    return 0;
}
