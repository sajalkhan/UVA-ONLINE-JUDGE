#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[20],b[20];
    string s1[20];
    scanf("%d",&n);
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<10; i++)
        {
            cin>>s1[i]>>a[i];
            b[i]=a[i];
        }
        sort(b,b+10,greater<int>());
        printf("Case #%d:\n",j+1);
        for(int i=0;i<10;i++)
		{
			if(b[0]==a[i])
			{
				cout<<s1[i]<<endl;
			}
		}
    }
    return 0;
}
/*
2
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10

*/
