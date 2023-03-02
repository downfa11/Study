#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int,int>> vec;

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,x,y;
	cin>>N;
	for(int i=0;i<N;i++){
		
		cin>>x>>y;

		cout<<x+y<<"\n";
	}

	
	return 0;
}