#include <iostream>
#include <math.h>
using namespace std;


void hanoi(int n, char src,char aux,char des ){
	if(n==0) return;
	hanoi(n-1,src,des,aux);
	cout<<n<<" from "<<src<<" to "<<des<<"\n";
	hanoi(n-1,aux,src,des);

}
int main(){

	int n;
	cin>>n;
	hanoi(n,'A','B','C');
	
	return 0;
}