/*------------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY(DHAKA)
    PROBLEM: UVA 417 WORD INDEX
---------------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int total=0;
map<string,int>mp;
map<string,int>::iterator it;
string s="abcdefghijklmnopqrstuvwxyz";
void word_index()
{
    for(int i=0; i<26; i++)
    {
        string st;
        st=s[i];
        mp[st]=++total;
    }
    for(int i=0; i<25; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            string st;
            st+=s[i];
            st+=s[j];
            mp[st]=++total;
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                string st;
                st+=s[i];
                st+=s[j];
                st+=s[k];
                mp[st]=++total;
            }
        }
    }
    for(int i=0; i<25; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    string st;
                    st+=s[i];
                    st+=s[j];
                    st+=s[k];
                    st+=s[l];
                    mp[st]=++total;
                }
            }
        }
    }
    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    for(int m=l+1; m<26; m++)
                    {
                        string st;
                        st+=s[i];
                        st+=s[j];
                        st+=s[k];
                        st+=s[l];
                        st+=s[m];
                        mp[st]=++total;
                    }
                }
            }
        }
    }
}
int main()
{
    word_index();
    string word;
    while(cin>>word)
    {
        cout<<mp[word]<<endl;
    }
    return 0;
}
