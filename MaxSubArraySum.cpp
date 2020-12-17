#include <bits/stdc++.h>
using namespace std;
int fnMax(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
void printSubArray(int arr[],int size){
	int start=0;
	int end=0;
	int temp=arr[0];
	int maxSum=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>temp+arr[i]){
			temp=arr[i];
			start=i;
		}
		else{
			temp=temp+arr[i];
		}
		if(maxSum<temp){
			maxSum=temp;
			end=i;
		}
	}
	for(int i=start;i<=end;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[]={2, -3, 7, -4, 2, 5, -8, 6, -1};
	int size=8;
	int temp=arr[0];
	int maxsum=arr[0];
	for(int i=1;i<size;i++){
		temp=fnMax(temp+arr[i],arr[i]);
		if(maxsum<temp){
			maxsum=temp;
		}
	}
	cout<<maxsum<<endl;
	cout<<"Sub array is"<<endl;
	printSubArray(arr,size);

}
