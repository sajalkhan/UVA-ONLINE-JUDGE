/*
    AUTHOR : SAJAL KHAN
    PROBLEM: UVA 11995 I CAN GUESS THE DATA STRUCTURE
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        stack<int>s;
        queue<int>q;
        priority_queue<int>Q;
        int x=0,y=0,z=0,t=0,a,b,balance=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            if(a==1)
            {
                s.push(b);
                q.push(b);
                Q.push(b);
            }
            if(a==2)
            {
                balance=0;
                if(!s.empty() && s.top()==b)
                {
                    x++;
                    s.pop();
                    balance=1;
                }
                if(!q.empty() && q.front()==b)
                {
                    y++;
                    q.pop();
                    balance=1;
                }
                if(!Q.empty() && Q.top()==b)
                {
                    z++;
                    Q.pop();
                    balance=1;
                }
                if(!balance) t=1;
            }
        }
        if(t) printf("impossible\n");
        else if(z>x && z>y)printf("priority queue\n");
        else if(x>y && x>z)printf("stack\n");
        else if(y>x && y>z)printf("queue\n");
        else if(x==y)printf("not sure\n");
        else if(x==z)printf("not sure\n");
        else if(y==z)printf("not sure\n");
    }
    return 0;
}
