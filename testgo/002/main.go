package main

import "fmt"




func main() {

	twoD :=make([][]int,3)
	
	
	for a,i:= range twoD {
		i=make([]int,a+1 )
		for j:=0;j<=a;j++{
			i[j]=a+j
		}
		
		twoD[a]=i
		
		
		
	}
	fmt.Println(twoD)

}