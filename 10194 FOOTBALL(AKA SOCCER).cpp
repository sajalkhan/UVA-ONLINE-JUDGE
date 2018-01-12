/*-----------------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 10194 FOOTBALL(AKA SOCCER)
------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string team_Name;
    int points=0;
    int game_played=0;
    int wins=0;
    int ties=0;
    int losses=0;
    int goal_difference=0;
    int goalscore=0;
    int goalagainest=0;
} team[50];
bool compare(node i,node j)
{
    if(i.points!=j.points)return i.points>j.points;
    if(i.wins!=j.wins)return i.wins>j.wins;
    if(i.goal_difference!=j.goal_difference)return i.goal_difference>j.goal_difference;
    if(i.goalscore!=j.goalscore)return i.goalscore>j.goalscore;
    if(i.game_played!=j.game_played)return i.game_played<j.game_played;
    for(int k=0; k<i.team_Name.size(); k++)i.team_Name[k]=tolower(i.team_Name[k]);
    for(int k=0; k<j.team_Name.size(); k++)j.team_Name[k]=tolower(j.team_Name[k]);
    return i.team_Name<j.team_Name;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,m;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        node team[50];
        char str[100];
        string s,cup;
        map<string,int>team_name;
        getline(cin,s);
        cup=s;
        scanf("%d",&n);
        getchar();
        for(int i=0; i<n; i++)
        {
            getline(cin,s);
            team[i].team_Name=s;
            team_name[s]=i;
        }
        scanf("%d",&m);
        getchar();
        for(int i=0; i<m; i++)
        {
            int T=0,T1,T2;
            string score[100],team1,team2;
            gets(str);
            char *p;
            p=strtok(str,"#@");
            while(p)
            {
                score[T++]=p;
                p=strtok(NULL,"#@");
            }
            team1=score[0];
            team2=score[3];
            stringstream ss1(score[1]);
            ss1>>T1;
            stringstream ss2(score[2]);
            ss2>>T2;
            team[team_name[team1]].game_played+=1;
            team[team_name[team2]].game_played+=1;
            team[team_name[team1]].goalscore+=T1;
            team[team_name[team2]].goalscore+=T2;
            team[team_name[team1]].goalagainest+=T2;
            team[team_name[team2]].goalagainest+=T1;
            if(T1>T2)
            {
                team[team_name[team1]].points+=3;
                team[team_name[team1]].wins+=1;
                team[team_name[team2]].losses+=1;
            }
            if(T1<T2)
            {
                team[team_name[team2]].points+=3;
                team[team_name[team2]].wins+=1;
                team[team_name[team1]].losses+=1;
            }
            if(T1==T2)
            {
                team[team_name[team1]].points+=1;
                team[team_name[team2]].points+=1;
                team[team_name[team1]].ties+=1;
                team[team_name[team2]].ties+=1;
            }
        }
        for(int i=0; i<n; i++)
        {
            team[i].goal_difference=(team[i].goalscore-team[i].goalagainest);
        }
        sort(team,team+n,compare);
        cout<<cup<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<i+1<<") "<<team[i].team_Name<<" "<<team[i].points<<"p, "<<team[i].game_played<<"g ("<<team[i].wins<<"-"<<team[i].ties<<"-"<<team[i].losses<<"), "<<team[i].goal_difference<<"gd ("<<team[i].goalscore<<"-"<<team[i].goalagainest<<")"<<endl;
        }
        if(t)printf("\n");
    }
    return 0;
}
