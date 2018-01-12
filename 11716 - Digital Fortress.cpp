/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        string s2;
        getline(cin,s);
        vector<string>v;
        long ln=s.size();
        double n=sqrt(ln);
        int m=n;
        if(m==n)
        {
            for(int j=0;j<m;j++)
            {
                string s1=s.substr(0,m);
                s.erase(0,m);
                v.push_back(s1);
            }
            for(int c=0;c<m;c++)
            {
                for(int r=0;r<m;r++)
                {
                    s2+=v[r][c];
                }
            }
            cout<<s2<<endl;
        }
        else printf("INVALID\n");
    }
    return 0;
}