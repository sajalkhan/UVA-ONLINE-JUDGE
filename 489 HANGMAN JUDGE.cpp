/*---------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 489 HANGMAN JUDGE
----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n;
    string query,guess;
    while(scanf("%d",&n) && n!=-1)
    {
        getchar();
        map<char,bool>mp,correct,wrong;
        getline(cin,query);
        int ln1=query.size();
        for(int i=0; i<ln1; i++)
        {
            if(query[i]!=' ')mp[query[i]]=true;
        }
        getline(cin,guess);
        int ok=mp.size();
        int ln2=guess.size(),yes=0,no=0;
        for(int i=0; i<ln2; i++)
        {
            if(mp[guess[i]])
            {
                if(!correct[guess[i]])
                {
                    yes++;
                    correct[guess[i]]=true;
                }
            }
            else
            {
                if(!wrong[guess[i]])
                {
                    no++;
                    wrong[guess[i]]=true;
                }
            }
            if(ok==yes)break;
            if(no==7)break;
        }
        printf("Round %d\n",n);
        if(ok==yes)printf("You win.\n");
        if(no==7)printf("You lose.\n");
        if(ok!=yes && no!=7)printf("You chickened out.\n");
    }
    return 0;
}
