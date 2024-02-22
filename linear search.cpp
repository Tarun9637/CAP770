#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n , int key) {
	for (int i = 0; i < n; i++){
	
	if (arr[i] == key){
	
	return 1;
    }	
    
}
return 0;
}



int main(){
  
  
  int arr[5] = {5,4,78,45,52};
  
  bool found = linearSearch(arr , 5 , 45);
  if(found)
  {
  	cout<<"element is present  ";
  }
  else {
  	cout<<"element is not present ";
  }
	return 0;
 }
