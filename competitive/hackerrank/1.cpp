#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    vector<int>a{1,2,3,4,5,6};
    vector<int>::iterator it;
    it=find(a.begin(),a.end(),4);
    if(it!=a.end())
        cout<<*it;
    else
        cout<<"NO";
}


