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
		vec.push_back({x,y});
		
	}
	sort(vec.begin(),vec.end());
	//sort는 기본적으로 오름차순으로 정렬한다. 12345
	//인자는 배열의 시작점 주소,마지막 주소+1 이다.
	
	for(int i=0;i<N;i++){
	cout<<vec[i].first<<" "<<vec[i].second<<"\n";
	}
	
	return 0;
}