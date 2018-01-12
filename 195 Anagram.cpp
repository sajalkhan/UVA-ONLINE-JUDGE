#include<bits/stdc++.h>
using namespace std;
bool compare(const char &x, const char &y)
{
    if(toupper(x)-toupper(y))return toupper(x) < toupper(y);
    else return x < y;
}
int main()
{
    int n;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end(),compare);
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end(),compare))
        {
            cout<<s<<endl;
        }
    }
    return 0;
}
