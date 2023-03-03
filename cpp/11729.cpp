#include<iostream>
#include<cmath>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void hanoi(int start,int mid,int end,int n);
int main(){
	fastio;
	int N;
	cin>>N;
	cout<<(int)pow(2,N)-1<<"\n";
	hanoi(1,2,3,N);
	
	return 0;
}

void hanoi(int start,int mid,int end,int n){
	if(n==1)
		cout<<start<<" "<<end<<"\n";
	else{
		hanoi(start,end,mid,n-1);
		cout<<start<<" "<<end<<"\n";
		hanoi(mid,start,end,n-1);
	}

}