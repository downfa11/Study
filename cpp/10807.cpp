#include<iostream>


int main(){
	int N,v;

	std::cin>>N;
	int* arr = new int[N];
for(int i=0;i<N;i++)
	std::cin>>arr[i];

	int sum=0;
	std::cin>>v;
	
	for(int i=0;i<N;i++)
		if(arr[i]==v) sum++;
	
	std::cout<<sum;
	return 0;
}