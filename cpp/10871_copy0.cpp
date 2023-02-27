#include<iostream>
int main(){
	
	int N;
	int X;
	std::cin >> N>> X;
	

	int val;
	for(int i=0;i<N;i++){
		std::cin>>val;
		if(val<X)
			std::cout<<val;
	}
	
}