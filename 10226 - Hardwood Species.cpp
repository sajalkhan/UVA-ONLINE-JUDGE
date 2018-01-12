/*-----------------------------------
    Md.Soharub hossen
    Daffodil International University
 -----------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        string s;
        int count=0;
        vector<string>v;
        map<string,bool>mp;
        map<string,int>tree;
        while(getline(cin,s))
        {
            if(s.size()==0)break;
            count++;
            tree[s]++;
            if(!mp[s])
            {
                mp[s]=true;
                v.push_back(s);
            }
        }
        sort(v.begin(),v.end());
        int size=v.size();
        double result=0.0;
        for(int i=0;i<size;i++)
        {
            result=(100.0*tree[v[i]])/count;
            cout<<v[i]<<" ";
            printf("%.4lf\n",result);
        }
        if(t)printf("\n");
    }
    return 0;
}