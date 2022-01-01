#include <iostream>

using namespace std;

int main(){
	int *px=new int();
	*px=99;
	cout<<"Con tro px co dia chi la :"<<px<<"\n";
	cout<<"Con tro px co gia tri la :"<<*px<<"\n";
	delete px;
	return 0;
}