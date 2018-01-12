/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char>m;
    m['P']='O';
    m['O']='I';
    m['I']='U';
    m['U']='Y';
    m['Y']='T';
    m['T']='R';
    m['R']='E';
    m['E']='W';
    m['W']='Q';
    m[']']='[';
    m['[']='P';
    m['\\']=']';
    m['L']='K';
    m['K']='J';
    m['J']='H';
    m['H']='G';
    m['G']='F';
    m['F']='D';
    m['D']='S';
    m['S']='A';
    m[';']='L';
    m['\'']=';';
    m['=']='-';
    m['-']='0';
    m['//']='.';
    m['.']=',';
    m[',']='M';
    m['M']='N';
    m['N']='B';
    m['B']='V';
    m['V']='C';
    m['C']='X';
    m['X']='Z';
    m['0']='9';
    m['9']='8';
    m['8']='7';
    m['7']='6';
    m['6']='5';
    m['5']='4';
    m['4']='3';
    m['3']='2';
    m['2']='1';
    m['1']='`';
    string s;
    while(getline(cin,s))
    {
        string s1;
        for(int i=0; i<s.size(); i++)
        {
            if(m[s[i]])s1+=m[s[i]];
            else s1+=s[i];
        }
        cout<<s1<<endl;
    }
    return 0;
}