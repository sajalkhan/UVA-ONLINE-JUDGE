/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char>m;
    m[']']='p';
    m['[']='o';
    m['p']='i';
    m['o']='u';
    m['i']='y';
    m['u']='t';
    m['y']='r';
    m['t']='e';
    m['r']='w';
    m['e']='q';
    m['\'']='l';
    m[';']='k';
    m['l']='j';
    m['k']='h';
    m['j']='g';
    m['h']='f';
    m['g']='d';
    m['f']='s';
    m['d']='a';
    m['.']='m';
    m[',']='n';
    m['m']='b';
    m['n']='v';
    m['b']='c';
    m['v']='x';
    m['c']='z';
    string s;
    while(getline(cin,s))
    {
        int ln=s.size();
        string result;
        for(int i=0;i<ln;i++)
        {
            if(s[i]==' ')result+=' ';
            else
            {
                s[i]=tolower(s[i]);
                if(m[s[i]])result+=m[s[i]];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}