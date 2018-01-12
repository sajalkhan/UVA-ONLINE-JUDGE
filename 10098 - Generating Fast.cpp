#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end()));
        printf("\n");
    }
    return 0;
}
