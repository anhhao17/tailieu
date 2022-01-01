#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<map>
#include<stack>
#include<queue>
#include<ctime>
#include<vector>
#include<set>
#include<cstdlib>
#include<utility>
#include <bits/stdc++.h>
using namespace std;
int n,m,x[10+5],opt[10+5];
char s[10+5][10000+5];
int ans[10000+5];
struct node{int val,id;}a[10000+5];
bool cmp(node A,node B)
{
    return A.val<B.val;
}
int solve()
{
    int i,j;
    long long sum=0;
    for (i=1;i<=m;i++)
    {
        a[i].val=0;
        for (j=1;j<=n;j++)
            if (s[j][i]=='1')
            {
                if (opt[j])
                    a[i].val++;
                else
                    a[i].val--;
            }
        a[i].id=i;
    }
    for (j=1;j<=n;j++)
        if (opt[j])
            sum-=x[j];
        else
            sum+=x[j];
    sort(a+1,a+m+1,cmp);
    for (i=1;i<=m;i++)
        ans[a[i].id]=i,sum+=i*a[i].val;
    return sum;
}
int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);     //for taking input

    freopen("output.txt", "w", stdout);     //for displaying output

#endif
    int T;
    scanf("%d",&T);
    while (T--)
    {
        string str,res="";
        cin>>str;
        int len=str.length();
        if(len>10){
            res=str[0]+to_string(len-2)+str[len-1];
            cout<<res<<endl;
        }else
            cout<<str<<endl;


    }
}