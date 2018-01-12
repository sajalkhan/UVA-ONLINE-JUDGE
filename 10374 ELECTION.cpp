/**------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10374 ELECTION
--------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,party,query;
    scanf("%d",&t);
    string s;
    getline(cin,s);
    while(t--)
    {
        string name,party_name,winner;
        map<string,string>team;
        map<string,bool>check;
        map<string,int>count_vote;
        map<string,int>::iterator it;
        scanf("%d",&party);
        getline(cin,s);
        for(int i=0; i<party; i++)
        {
            getline(cin,name);
            getline(cin,party_name);
            team[name]=party_name;
            check[name]=true;
        }
        scanf("%d",&query);
        getline(cin,s);
        for(int i=0; i<query; i++)
        {
            getline(cin,name);
            if(check[name])count_vote[name]++;
        }
        int max=0,tie=0;
        for(it=count_vote.begin(); it!=count_vote.end(); it++)
        {
            if(max<it->second)max=it->second;
        }
        for(it=count_vote.begin(); it!=count_vote.end(); it++)
        {
            if(max==it->second)tie++;
            if(tie==2)break;
        }
        if(tie==2 || !max)printf("tie\n");
        else
        {
            for(it=count_vote.begin(); it!=count_vote.end(); it++)
            {
                if(max==it->second)
                {
                    cout<<team[it->first]<<endl;
                    break;
                }
            }
        }
        if(t)printf("\n");
    }
    return 0;
}
