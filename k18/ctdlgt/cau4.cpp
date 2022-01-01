#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}


void sort(int *pa){
	int min;
	for(int i=0;i<9;i++){
		min=i;
		for(int j=i+1;j<10;j++){
			if(pa[min]>pa[j])
			if(pa[min]>pa[j])
				min=j;
		}
		swap(pa[i],pa[min]);
	}
}

int main(){

	srand(time(0));
	int *pa=new int[10];
	
	int random;
	for(int i=0;i<10;i++){
		random=rand()%99;
		pa[i]=random;		
	}
	for(int i=0;i<10;i++){
		cout<<pa[i]<<" ";
	}
	cout<<"\n";
	sort(pa);
	for(int i=0;i<10;i++){
		cout<<pa[i]<<" ";
	}
	return 0;
}