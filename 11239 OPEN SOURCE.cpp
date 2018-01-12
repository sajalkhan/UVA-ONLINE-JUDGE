/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11239 OPEN SOURCE
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    string a;
    int b;
}pro[100000];
bool cmp(node i,node j)
{
    if(i.b==j.b)return i.a.compare(j.a) < 0;
    return i.b>j.b;
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int count;
    string s,project;
    map<string,int>m1,visit;
    map<string,int>::iterator it;
    map<string,string>student;
    while(getline(cin,s) && s!="0")
    {
        if(s=="1")
        {
            int j=0;
            for(it=m1.begin();it!=m1.end();it++)
            {
                pro[j].a=it->first;
                pro[j++].b=it->second;
            }
            sort(pro,pro+m1.size(),cmp);
            for(int i=0;i<m1.size();i++)
            {
                cout<<pro[i].a<<" "<<pro[i].b<<endl;
            }
            s.clear();
            m1.clear();
            visit.clear();
            student.clear();
            project.clear();
        }
        else if(s[0]>='A' && s[0]<='Z')
        {
            project=s;
            if(!m1[project])count=0;
            m1[project]=count;
        }
        else
        {
            if(!visit[s])
            {
                visit[s]=1;
                student[s]=project;
                m1[project]=++count;
            }
            else
            {
                string reg;
                reg=student[s];
                if(reg!=project && visit[s]==1)
                {
                    visit[s]=2;
                    int total=m1[reg];
                    m1[reg]=total-1;
                }
            }
        }
    }
    return 0;
}
