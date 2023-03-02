#include<iostream>
#include<algorithm>

int main(){
	
	int N,k;
	std::cin>>N >> k;
	int arr[N];
	for(int i =0; i<N; i++){
		std::cin>>arr[i];
	}
	std::sort(arr,arr+N);
	std::cout<<arr[N-k];
}