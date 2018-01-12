/**------------------------------------
    MD.SOHARUB HOSSEN
    DAFFODIL INTERNATIONAL UNIVERSITY
    PROBLEM: UVA 10954 ADD ALL
--------------------------------------*/
#include<bits/stdc++.h>
using namespace std;
struct compare
{
    bool operator()(const int& i,const int& j)
    {
        return i>j;
    }
};
int main()
{
    int n,m;
    while(cin>>n && n)
    {
        priority_queue<int,vector<int>,compare >q;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            q.push(m);
        }
        int sum=0,num=0;
        while(q.size()>1)
        {
            num=q.top();
            q.pop();
            num+=q.top();
            q.pop();
            sum+=num;
            q.push(num);
        }
        printf("%d\n",sum);
    }
    return 0;
}
