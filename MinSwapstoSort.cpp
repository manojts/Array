#include <bits/stdc++.h>
using namespace std;
int main(){
	//given range of numbers from 1 to n ,find min swaps to sort
	int arr[]={4,3,1,2};
	int size=4;
	int count=0;
	for(int i=0;i<size;i++){
		if(arr[i]==i+1)
			continue;
		else{
			count++;
			int temp=arr[i];
			arr[i]=arr[temp-1];
			arr[temp-1]=temp;
			i--;
		}
	}
	cout<<count<<endl;
}