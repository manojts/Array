#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-1,0,1,2,-1,-4};

	int size=6;
	sort(arr,arr+size);
	int sum=0;
	int start;
	int end;
	if(size<3){
		return ;
	}
	for(int i=0;i<size-2;i++){
		start=i+1;
		end=size-1;
		if(i==0 || arr[i]!=arr[i-1])
		{
			while(start<end){
			
				if(arr[i]+arr[start]+arr[end]==sum){
					cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
					
					while(start<end && arr[start]==arr[start+1]){
                            start++;
                    }
                    while(start<end && arr[end]==arr[end-1]){
                            end--;
                    }
                    start++;
					end--;
				}
				else if(arr[i]+arr[start]+arr[end]>sum){
				end--;
				}
				else{
				start++;
				}
			}
		}
	}
}