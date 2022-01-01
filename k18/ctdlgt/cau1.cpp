#include <iostream>

using namespace std;

int main(){
	int x=25;
	int *px;
	px=&x;
	*px=30;
	cout<<"Gia tri x = "<<x<<"\n";
	return 0;
}