#include <iostream>

using namespace std;

int main(){
	int *px=new int[10];
	for(int i=0;i<10;i++){
		px[i]=i+1;
	}
	cout<<"Mang con tro co gia tri: \n";
	for(int i=0;i<10;i++){
		cout<<px[i];
		
	}
	delete[] px;
	return 0;
}