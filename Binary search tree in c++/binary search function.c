#include<stdio.h>
// binary search algorithm in c
int binarysearch(int arr[],int l,int r,int x){
	if(r>=l)
	{
		int mid = l+(r-l)/2;
	
		if(arr[mid]==x){
				return mid;
		}
		
			
	
	if (arr[mid]>x){
		return binarysearch(arr,l, mid -1,x);
		}
	return binarysearch(arr,mid+1,r,x);	
			
	}
	return -1;
}
int main(void){
	int i,arr[100],n,x;
	printf("Enter your array for")
	for(i=0;i<100;i++){
		
	}
}

