#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,  int key){
	int low, high =  n-1;
	int mid = low + (high- low)/2;
while(low<=high){
    if (arr[mid] == key)
    {
      return mid;
  }
    if (key < arr[mid])
    {
	
      high = mid - 1;
}
    else
      low = mid + 1;

mid = low + (high - low)/2;
	}
	
return -1;
}
int main(){
	int arr[5] = {9, 6, 3, 5, 8};
	cout<<"element is "<<binarySearch(arr , 5 , 5);
	
	return 0;
}

