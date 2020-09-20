#include <bits/stdc++.h>
using namespace std;


int main(){
	int arr[]={2, -3, 7, -4, 2, 5, 8, 6, -1};
	int size=8;
	int temp=arr[0];
	int maxsum=arr[0];
	int curMax=arr[0];
    int curMin=arr[0];
    int best=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<0){
            int temp=curMax;
            curMax=curMin;
            curMin=temp;
            }
        curMax=max(curMax*arr[i],arr[i]);
        curMin=min(curMin*arr[i],arr[i]);
        if(best<curMax)
            best=curMax;
    }
    cout<<best<<endl;
}