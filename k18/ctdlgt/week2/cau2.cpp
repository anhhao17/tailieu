#include <iostream>
#include <math.h>
using namespace std;


int giaithua(int n){
	if(n<=1) return 1;
	return n*giaithua(n-1);
}
int main(){

	int n;
	cin>>n;
	int S1;
	S1=giaithua(n);
	float S2=0;
	for(int i=1;i<=n;i++){
		S2+=1/(float)giaithua(i);
	}
	cout<<S1<<"\n";
	cout<<round(S2*100)/100;
	return 0;
}