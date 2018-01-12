/**
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11629 BALLOT EVALUATION
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,m,k1,k2;
    scanf("%d%d",&n,&m);
    map<string,int>mp;
    getchar();
    for(int i=0; i<n; i++)
    {
        cin>>s;
        scanf("%d.%d",&k1,&k2);
        mp[s]=k1*10+k2;
    }
    getchar();
    for(int i=1; i<=m; i++)
    {
        int number,b=0;
        int total=0;
        getline(cin,s);
        stringstream ss(s);
        string word,op;
        while(ss>>word)
        {
            if(!b && (word!="+" && word!="<" && word!=">" && word!="<=" && word!=">=" && word!="="))total+=mp[word];
            if(!b && (word=="<" || word==">" || word=="<=" || word==">=" || word=="="))op=word,b=1;
            else if(b)
            {
                stringstream ss1(word);
                ss1>>number;
                number*=10;
            }
        }
        if(op=="=")
        {
            if(total==number)printf("Guess #%d was correct.\n",i);
            else printf("Guess #%d was incorrect.\n",i);
        }
        else if(op==">")
        {
            if(total>number)printf("Guess #%d was correct.\n",i);
            else printf("Guess #%d was incorrect.\n",i);
        }
        else if(op=="<")
        {
            if(total<number)printf("Guess #%d was correct.\n",i);
            else printf("Guess #%d was incorrect.\n",i);
        }
        else if(op==">=")
        {
            if(total>=number)printf("Guess #%d was correct.\n",i);
            else printf("Guess #%d was incorrect.\n",i);
        }
        else if(op=="<=")
        {
            if(total<=number)printf("Guess #%d was correct.\n",i);
            else printf("Guess #%d was incorrect.\n",i);
        }
    }
    return 0;
}
