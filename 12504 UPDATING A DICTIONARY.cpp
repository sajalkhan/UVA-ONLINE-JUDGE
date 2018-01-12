/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 12504 UPDATING A DICTIONARY
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    string s1,s2;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        map<string,bool>m3,m4;
        map<string,string>m1,m2;
        map<string,string>::iterator it1,it2;
        cin>>s1;
        string a,b,c,d;
        int ln1=s1.size();
        for(int i=0; i<ln1; i++)
        {
            if(isalpha(s1[i]))a+=s1[i];
            if(isdigit(s1[i]))b+=s1[i];
            if(s1[i]==',' || s1[i]=='}' && a.size())
            {
                m1[a]=b;
                m3[a]=true;
                a.clear();
                b.clear();
            }
        }
        cin>>s2;
        int ln2=s2.size();
        for(int i=0; i<ln2; i++)
        {
            if(isalpha(s2[i]))c+=s2[i];
            if(isdigit(s2[i]))d+=s2[i];
            if(s2[i]==',' || s2[i]=='}' && c.size())
            {
                m2[c]=d;
                m4[c]=true;
                c.clear();
                d.clear();
            }
        }
        int count=0;
        bool balance=true;
        for(it2=m2.begin(); it2!=m2.end(); it2++)
        {
            if(!m3[it2->first])
            {
                count++;
                if(balance)
                {
                    printf("+");
                    balance=false;
                }
                else if(!balance)printf(",");
                cout<<it2->first;
            }
        }
        if(!balance)
        {
            printf("\n");
            balance=true;
        }
        for(it1=m1.begin(); it1!=m1.end(); it1++)
        {
            if(!m4[it1->first])
            {
                count++;
                if(balance)
                {
                    printf("-");
                    balance=false;
                }
                else if(!balance)printf(",");
                cout<<it1->first;
            }
        }
        if(!balance)
        {
            printf("\n");
            balance=true;
        }
        for(it1=m2.begin(); it1!=m2.end(); it1++)
        {
            if(m3[it1->first])
            {
                string r1,r2;
                r1=m1[it1->first];
                r2=m2[it1->first];
                if(r1!=r2)
                {
                    count++;
                    if(balance)
                    {
                        printf("*");
                        balance=false;
                    }
                    else if(!balance)printf(",");
                    cout<<it1->first;
                }
            }
        }
        if(!balance)printf("\n");
        if(!count)printf("No changes\n");
        if(t)printf("\n");
    }
    printf("\n");
    return 0;
}
