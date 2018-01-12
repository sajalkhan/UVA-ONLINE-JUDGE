/**-----------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10409 DIE GAME
-------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    while(scanf("%d",&t) && t)
    {
        string s;
        getchar();
        int T=1,B=6,N=2,S=5,E=4,W=3;
        for(int i=0; i<t; i++)
        {
            cin>>s;
            if(s=="north")
            {
                int x,y;
                x=T;
                y=B;
                T=S;
                B=N;
                N=x;
                S=y;
            }
            if(s=="south")
            {
                int x,y;
                x=T;
                y=B;
                T=N;
                B=S;
                N=y;
                S=x;
            }
            if(s=="west")
            {
                int x,y;
                x=T;
                y=B;
                T=E;
                B=W;
                E=y;
                W=x;
            }
            if(s=="east")
            {
                int x,y;
                x=T;
                y=B;
                T=W;
                B=E;
                E=x;
                W=y;
            }
        }
        printf("%d\n",T);
    }
    return 0;
}
