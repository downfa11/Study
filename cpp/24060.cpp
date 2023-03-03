#include<iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void merge_sort(int* A,int start,int end,int K);
void merge(int* A,int p,int q,int r,int K);
int count=0;

int main(){
	fastio;
	
	int N,K;
	int* arr = new int[N];
	cin>>N>>K;
	for(int i=0;i<N;i++)
		cin>>arr[i];
	merge_sort(arr,0,N-1,K);
	
	if(count<K) cout<<-1<<endl;
	return 0;
}


void merge_sort(int* A,int start,int end,int K){
	if(start<end){
		int mid = (start+end)/2;
		
		merge_sort(A,start,mid,K);
		merge_sort(A,mid+1,end,K);
		merge(A,start,mid,end,K);
	}
}

void merge(int* A,int p,int q,int r,int K){
	int tmp[r+1];
	int i=p,j=q+1,t=1;
	while(i<=q && j<=r){
		if(A[i]<=A[j]){
			tmp[t++]=A[i++];
		}
		else tmp[t++] = A[j++];
	}
	
	
	
	while(i<=q)
		tmp[t++]=A[i++];
	while(j<=r)
		tmp[t++]=A[j++];
	
	i=p;
	t=1;
	
	while(i<=r)
	{
		A[i++]=tmp[t++];
		count++;
		if(count==K) cout<<A[i-1];
	}
}