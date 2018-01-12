/**-----------------------------------
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 496 SIMPLY SUBSET
------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(getline(cin,a) && a.size())
    {
        map<string,bool>X,Y,count;
        vector<string>x,y;
        vector<string>::iterator it;
        stringstream ss(a);
        string num;
        while(ss>>num)x.push_back(num),X[num]=true;
        getline(cin,b);
        stringstream ss1(b);
        while(ss1>>num)y.push_back(num),Y[num]=true;
        int m=X.size();
        int n=Y.size();
        if(m<=n)
        {
            sort(y.begin(),y.end());
            for(int i=0; i<x.size(); i++)
            {
                int b=binary_search(y.begin(),y.end(),x[i]);
                if(b)count[x[i]]=true;
            }
            if(m==n && count.size()==m)printf("A equals B\n");
            if(m<n && count.size()==m)printf("A is a proper subset of B\n");
            if(!count.size())printf("A and B are disjoint\n");
            if(count.size() && ((m==n && count.size()!=n) || (m<n && count.size()!=m)))printf("I'm confused!\n");
        }
        if(m>n)
        {
            sort(x.begin(),x.end());
            for(int i=0; i<y.size(); i++)
            {
                int b=binary_search(x.begin(),x.end(),y[i]);
                if(b)count[y[i]]=true;
            }
            if(count.size()==n)printf("B is a proper subset of A\n");
            if(!count.size())printf("A and B are disjoint\n");
            if(count.size() && count.size()!=n)printf("I'm confused!\n");
        }
    }
    return 0;
}
