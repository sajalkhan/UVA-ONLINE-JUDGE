/**-------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 895 WORD PROBLEM
---------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0;
    string s;
    map<string,int>D;
    map<string,bool>dictionary;
    map<string,bool>::iterator it;
    while(getline(cin,s))
    {
        if(s[0]!='#' && !b)
        {
            sort(s.begin(),s.end());
            dictionary[s]=true;
            D[s]++;
        }
        if(s[0]=='#' && !b)
        {
            b=1;
            continue;
        }
        if(s[0]!='#' && b)
        {
            int count=0;
            string w,word;
            stringstream ss(s);
            while(ss>>word)w+=word;
            sort(w.begin(),w.end());
            int ln=w.size();
            for(it=dictionary.begin(); it!=dictionary.end(); it++)
            {
                int l=0;
                word=it->first;
                for(int i=0; i<ln; i++)
                {
                    if(word[l]==w[i])++l;
                    if(l==word.size())
                    {
                        count+=D[word];
                        break;
                    }
                }
            }
            printf("%d\n",count);
        }
        if(s[0]=='#')
        {
            b=0;
            D.clear();
            dictionary.clear();
        }
    }
    return 0;
}
