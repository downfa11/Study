#include<iostream>
int main(){
	
	int N;
	int X;
	std::cin >> N>> X;
	
	int arr[10000];
	
	for(int i=0;i<N;i++){
		std::cin >> arr[i];
	}
	
	for(int i=0;i<N;i++){
		if(arr[i]<X)
			std::cout<<arr[i]<<" ";
	}
}