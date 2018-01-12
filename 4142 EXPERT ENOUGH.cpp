/**---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 4142 EXPERT ENOUGH
-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string brand_name;
    int low_price;
    int high_price;
}car[100000];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    string s;
    int t,n,l,h,p,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            getchar();
            cin>>s>>l>>h;
            car[i].brand_name=s;
            car[i].low_price=l;
            car[i].high_price=h;
        }
        scanf("%d",&p);
        for(int i=0;i<p;i++)
        {
            int b=0;
            string s1;
            scanf("%d",&q);
            for(int i=0;i<n;i++)
            {
                if(q>=car[i].low_price && q<=car[i].high_price)
                {
                    b++;
                    s1=car[i].brand_name;
                }
            }
            if(b==1)cout<<s1<<endl;
            else printf("UNDETERMINED\n");
        }
        if(t)printf("\n");
    }
    return 0;
}
