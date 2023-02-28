#include<iostream>

int main(){
	
int X,N,a,b;
std::cin>>X;
	std::cin>>N;
for(int i=0;i<N;i++){
	std::cin>>a>>b;
	X-=a*b;
}
	if(X==0)
		std::cout<<"Yes"<<std::endl;
	else std::cout<<"No"<<std::endl;
	
	return 0;
}

