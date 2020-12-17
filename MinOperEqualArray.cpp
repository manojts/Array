#include <bits/stdc++.h>
using namespace std;
/*

Find the sum of elements
Find the smallest element

minOperation = sum -(n*minElement);

*/
int main(){
	int arr[] = {1,2,3,4,5,6};
	int n = 6;
	int minElement = arr[0];
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(minElement > arr[i])
			minElement = arr[i];
	}
	int minOperation = sum - (n * minElement);
	cout<<minOperation<<endl;
}