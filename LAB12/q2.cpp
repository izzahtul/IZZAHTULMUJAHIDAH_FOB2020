#include <iostream>
using namespace std;

//code for linear
void linearsearch(int arr[], int key,int arr_size, int index) {
	for(int i=0; i < arr_size; i++){
		if(key==arr[i]){
			index =i;
		}
	}
	cout <<"Linear search "<< key << "in index "<<  index <<endl;
	cout <<endl;
}
//code for binary
int binarysearch(int arr[], int key,int arr_size, int index,int low, int high) {
	while(high>=low){
		
		int mid= (high + low)/2;
		
		if(key<arr[mid]){
			high = mid- 1;
		}
		else if(key == arr[mid]){
			index=mid;
			break;
		}
		else if (key > arr[mid]){
			low=mid+1;
		}
	}
	
	cout <<"Binary search "<<key<<" in index "<<index<<endl;
}
//declare
int main(){
	int arr_size=7;
	int arr[7]={1, 4, 7, 2, 6, 3, 5};
	
	for(int i=0; i< 7-1; i++) {
    for(int j=i+1; j< 7; j++) {
      if(arr[i]>arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int i=0; i<arr_size; i++) {
    cout <<arr[i];
  }
  //ask user for input a number
  int key;
  cout << endl;
  cout << "Input number : ";
  cin >> key;
  
  int high = 7 -1;
  int low = 0;
  
  int index =0;
  linearsearch(arr, key, arr_size, index);
  binarysearch(arr, key, arr_size, index, low, high);

  return 0;

}