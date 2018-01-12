/**
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11308 BANKRUPT BAKER
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string recipe;
    int cost;
}total[1000];
bool cmp(node i,node j)
{
    if(i.cost==j.cost)return i.recipe.compare(j.recipe)<0;
    return i.cost<j.cost;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,m,n,b;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        int I=0;
        string s,resturent;
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::toupper);
        resturent=s;
        int price,item,count=0;
        scanf("%d %d %d",&m,&n,&b);
        getchar();
        map<string,int>food;
        for(int i=0;i<m;i++)
        {
            cin>>s>>price;
            food[s]=price;
        }
        for(int i=0;i<n;i++)
        {
           getchar();
           string rec;
           getline(cin,s);
           rec=s;
           int money=0;
           scanf("%d",&item);
           for(int j=0;j<item;j++)
           {
               getchar();
               cin>>s>>price;
               money+=food[s]*price;
           }
           if(money<=b)
           {
               count++;
               total[I].recipe=rec;
               total[I++].cost=money;
           }
        }
        cout<<resturent<<endl;
        if(count)
        {
            sort(total,total+count,cmp);
            for(int i=0;i<count;i++)
            {
                cout<<total[i].recipe<<endl;
            }
        }
        else printf("Too expensive!\n");
        if(t)printf("\n");
    }
    printf("\n");
    return 0;
}
