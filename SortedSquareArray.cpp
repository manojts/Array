#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-8,-6,-4,1,3,4,8,15};
	int size=8;
	int res[10];
	int start=0;
	int end=size-1;
	for(int i=size-1;i>=0;i--){
		if(abs(arr[start])>abs(arr[end])){
			res[i]=arr[start]*arr[start];
			start++;
		}
		else{
			res[i]=arr[end]*arr[end];
			end--;
		}
	}
	for(int i=0;i<size;i++){
		cout<<res[i]<<" ";
	}
}