/*----------------sajal khan-----------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name,author;
    while(getline(cin,name) && name.size())
    {
        getline(cin,author);
        string check1,check2;
        stringstream ss1(name);
        string Name;
        while(ss1>>Name)check1+=Name[0];
        stringstream ss2(author);
        while(ss2>>Name)check2+=Name[0];
        if(check1==check2)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
