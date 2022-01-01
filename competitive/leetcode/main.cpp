#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;




vector<int> v;


int parent(int x){
    if(v[x]==-1)
        return x;
    return v[x]=parent(v[x]);

}

void lead(int a,int b){

    int p_a=parent(a);
    int p_b=parent(b);
    if(p_a==p_b) return;
    v[p_a]=p_b;


}


int main()
{
    vector<int>a{1,1,0};
    vector<int>b{1,1,0};
    vector<int>c{0,0,1};
    vector<vector<int>>d{a,b,c};
    int n=d.size();
    v=vector<int> (n,-1);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(d[i][j])  //if i is friend of j, add them in a group
            { 
                lead(i,j);

            }
        }
    }
}
