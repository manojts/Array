#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int size = 12;
	int left [size] = {0};
	int right [size] = {0};
	for(int i=0;i<size;i++){
		if(i==0){
			left[i] = arr[i];
		}
		else if(arr[i] > left[i-1]){
			left[i] = arr[i];
		}
		else{
			left[i] = left[i-1];
		}
	}
	int result =0;
	for(int i=size-1;i>=0;i--){
		if(i==size-1){
			right[i] = arr[i];
		}
		else if(arr[i] > right[i+1]){
			right[i] = arr[i];
		}
		else{
			right[i] = right[i+1];
		}
		result += min(left[i],right[i])-arr[i];
	}
	cout<<result<<endl;
}