#include<iostream>
#include<algorithm>

int main(){

int val[5];
int sum=0,mid=0;
	for(int i=0;i<5;i++){
	std::cin>>val[i];
	sum+=val[i];
	}
	//algorithm의 sort(배열의 포인터,배열의 포인터+배열의 size)
	std::sort(val,val+5);
	mid=val[2];
	
	std::cout<<sum/5<<std::endl;
	std::cout<<mid;
	
}