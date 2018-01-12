/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 450 LITTLE BLACK BOOK
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string Dep;
    string title;
    string F_name;
    string L_name;
    string s_add;
    string h_phone;
    string w_phone;
    string mail;
} person[100000];
bool cmp(node i,node j)
{
    return i.L_name.compare(j.L_name) < 0;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,i=0;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string s,s1,Dpr;
        int dept=0;
        while(getline(cin,s))
        {
            if(!s.size())break;
            if(!dept)
            {
                Dpr=s;
                dept=1;
                person[i].Dep=Dpr;
                continue;
            }
            int tl=0,fn=0,ln=0,sd=0,hp=0,wp=0,ln1=s.size();
            for(int j=0; j<ln1; j++)
            {
                if(s[j]!=',')s1+=s[j];
                else
                {
                    if(!tl)
                    {
                        tl=1;
                        person[i].title=s1;
                        s1.clear();
                        continue;
                    }
                    if(!fn)
                    {
                        fn=1;
                        person[i].F_name=s1;
                        s1.clear();
                        continue;
                    }
                    if(!ln)
                    {
                        ln=1;
                        person[i].L_name=s1;
                        s1.clear();
                        continue;
                    }
                    if(!sd)
                    {
                        sd=1;
                        person[i].s_add=s1;
                        s1.clear();
                        continue;
                    }
                    if(!hp)
                    {
                        hp=1;
                        person[i].h_phone=s1;
                        s1.clear();
                        continue;
                    }
                    if(!wp)
                    {
                        wp=1;
                        person[i].w_phone=s1;
                        s1.clear();
                        continue;
                    }
                }
            }
            person[i].mail=s1;
            s1.clear();
            i++;
            if(dept)person[i].Dep=Dpr;
        }
    }
    sort(person,person+i,cmp);
    for(int j=0; j<i; j++)
    {
        printf("----------------------------------------\n");
        cout<<person[j].title<<" ";
        cout<<person[j].F_name<<" ";
        cout<<person[j].L_name<<endl;
        cout<<person[j].s_add<<endl;
        cout<<"Department: "<<person[j].Dep<<endl;
        cout<<"Home Phone: "<<person[j].h_phone<<endl;
        cout<<"Work Phone: "<<person[j].w_phone<<endl;
        cout<<"Campus Box: "<<person[j].mail<<endl;
    }
    return 0;
}
