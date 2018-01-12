/**---------------------------------------------------
|    MD.SOHARUB HOSSEN                                |
|    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)         |
|    PROBLEM: UVA 11062 ANDY'S SECOND DICTIONARY      |
------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,word;
    set<string>st;
    set<string>::iterator it;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string word1;
        while(ss>>word1)
        {
            string s2;
            word+=word1;
            int ln=word.size();
            if(word[ln-1]=='-')
            {
                word.erase(0+ln-1);
                continue;
            }
            for(int i=0; i<ln; i++)
            {
                if(isalpha(word[i])|| word[i]=='-')s2+=tolower(word[i]);
                else
                {
                    if(s2.size()!=0)st.insert(s2);
                    s2.clear();
                }
            }
            if(s2.size()!=0)st.insert(s2);
            word.clear();
        }
    }
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
