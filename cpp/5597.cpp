#include<iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


int main(){
	fastio;
	int arr[31]={0,};
	int index=0;
	
	for(int i=0;i<28;i++)
	{
		cin>>index;
		arr[index-1]=1;
	}
		for(int i=0;i<30;++i){
			if(arr[i]==0)
				cout<<i+1<<"\n";
		}
	
	

	return 0;
}