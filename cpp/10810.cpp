#include<iostream>
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main(){
	
	fastio;
	
	int N,M;
	cin>>N>>M;
	int arr[100];
	
	for(int a=0;a<N;a++) arr[a]=a+1;
	while(M-->0){
		int i,j;
		cin>>i>>j;
		i--;j--;
		auto temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;

	}
	
	for(int i=0;i<N;i++)
		cout<<arr[i]<<' ';
	
	return 0;
}