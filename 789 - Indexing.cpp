/**-----------------------------------------*/
///    Author : sajal Khan
///    Daffodil International University
/**-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    set<int>x;
    string text;
} data[100000];
bool cmp(node i,node j)
{
    return i.text.compare(j.text)<0;
}
int main()
{
    char t;
    string s;
    scanf("%c",&t);
    int i=1,line=1;
    map<string,int>mp;
    getchar();
    while(getline(cin,s) && s.size())
    {
        stringstream ss(s);
        string Word;
        while(ss>>Word)
        {
            string word;
            int ln=Word.size();
            for(int i=0;i<ln;i++)if(isalpha(Word[i]))word+=Word[i];
            if(word[0]==t)
            {
                if(!mp[word])
                {
                    mp[word]=i;
                    data[mp[word]].text=word;
                    data[mp[word]].x.insert(line);
                    i++;
                }
                else data[mp[word]].x.insert(line);
            }
        }
        line++;
    }
    sort(data,data+i,cmp);
    for(int j=1; j<=i; j++)
    {
        int k=0;
        cout<<data[j].text<<" ";
        set<int>::iterator it;
        int ln=data[j].x.size();
        for(it=data[j].x.begin();it!=data[j].x.end();it++,k++)
        {
            if(k==ln-1)cout<<*it<<endl;
            else cout<<*it<<" ";
        }
    }
    return 0;
}
