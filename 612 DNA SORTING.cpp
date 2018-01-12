/*-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 612 DNA SORTING
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string dna;
    int ln;
    int pos;
};
bool cmp(node i,node j)
{
    if(i.ln==j.ln)return i.pos<j.pos;
    else if(i.ln!=j.ln)return i.ln<j.ln;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,m;
    string s;
    scanf("%d",&t);
    getline(cin,s);
    while(t--)
    {
        node DNA[100000];
        scanf("%d %d",&n,&m);
        getchar();
        for(int i=0;i<m;i++)
        {
            cin>>s;
            int count=0;
            DNA[i].dna=s;
            DNA[i].pos=i;
            int ln=s.size();
            for(int j=0;j<ln-1;j++)
            {
                for(int k=j+1;k<ln;k++)
                {
                    if(s[j]>s[k])count++;
                }
            }
            DNA[i].ln=count;
        }
        sort(DNA,DNA+m,cmp);
        for(int i=0;i<m;i++)cout<<DNA[i].dna<<endl;
        if(t)printf("\n");
    }
    return 0;
}
