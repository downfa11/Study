#include<iostream>
#include<vector>
#include<algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)

using namespace std;

int main()
{
	fastio;
	int N;
	vector<pair<int,int>> vec;
	cin>>N;
	for(int i=0;i<N;i++){
		int x,y;
		cin>>x>> y;
		vec.push_back({y,x});
	}
	
	sort(vec.begin(),vec.end());
	
		for(int i=0;i<N;i++){
	cout<<vec[i].second<<" "<<vec[i].first<<"\n";
	}
	return 0;
}