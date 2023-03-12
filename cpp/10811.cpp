#include<iostream>
#include<stack>

#define fastio ios::sync_with_stdio(0),cout.tie(0),cin.tie(0)
using namespace std;
int main(){
	fastio;
	
	stack<int> s;
	int arr[101];
	
	int N,M;
	cin>>N>>M;
	
	for(int i=0;i<N;i++)
		arr[i]=i+1;
	while(M-->0){
		
		int i,k;
		cin>>i>>k;
		i--;
		
		for(int a=i;a<k;a++)
			s.push(arr[a]);
		
		for(int a=i;a<k;a++)
		{
			arr[a] = s.top();
			s.pop(); 
		}
	}
		for(int a=0;a<N;a++)
			cout<<arr[a]<<' ';
	
	return 0;
}