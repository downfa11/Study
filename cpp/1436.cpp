#include<iostream>
#include<string>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


int main(){
	fastio;
	int num = 666;
	
	int cnt=0;
	
	int N;
	cin>>N;
	
	while(1){
		
	string target = to_string(num);
	for(int i=0;i<target.length()-2;i++){
		if(target[i]=='6' &&target[i+1]=='6'&&target[i+2]=='6')
		{
			cnt++;
			if(cnt==N){
				cout<<num;
				return 0;
			}
			
			break;
		}
		
	}
	num++;
	}

	return 0;
}