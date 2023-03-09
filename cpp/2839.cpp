#include<iostream>
#define fastio ios::sync_with_stdio(0), cout.tie(0), cin.tie(0)
using namespace std;

int asdf(int N);

int main(){
	fastio;
	int N,a,b;
	cin>>N;
		a=N/5;
	while(1){
		
		if(a<0)
		 {cout<<-1; return 0;}
			
		if((N-5*a)%3==0)
		{b=(N-5*a)/3; break;}
		a--;
		
	}
	
	cout<<a+b<<"\n";
	return 0;
}
