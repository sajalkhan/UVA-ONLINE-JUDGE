/*
	AUTHOR : SAJAL KHAN
	PROBLEM: 11479 - Is this the easiest problem?
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,x,y,z;
    scanf("%ld",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%ld %ld %ld",&x,&y,&z);
        if((x+y)>z && (x+z)>y && (y+z)>x)
        {
            if(x==y && y==z)printf("Case %d: Equilateral\n",i);
            else if(x==y || x==z || y==z)printf("Case %d: Isosceles\n",i);
            else printf("Case %d: Scalene\n",i);
        }
        else printf("Case %d: Invalid\n",i);
    }
    return 0;
}
/*
4
1 2 5
1 1 1
4 4 2
3 4 5
*/