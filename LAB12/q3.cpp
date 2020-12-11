#include <iostream>
#include <fstream>
using namespace std;

//for sortir
void sort(int arr[], int arr_size){
  int temp = arr[1]; 
  for (int i = 0; i < arr_size; i++){ 
    for (int j = i+1; j < arr_size + 1; j++){
      if (arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < arr_size; i++)
  cout << arr[i] << '\n';
}
//code binary search
void BinarySearch(int arr[], int key, int arr_size, int index, int low, int high){
  while(high >= low){
    int mid = (high + low)/2;
    if (key < arr[mid]){
      high = mid - 1;
    }
    else if (key == arr[mid]){
      index = mid;
      break;
    }
    else if (key > arr[mid]){
      low = mid + 1;
    }
  }
  cout << key << '\n' << arr[index];

  if (key == arr[index]){
    cout << '\n' << "OMG!!!!!You are so lucky, you win the lottery dude!";
  }
  else{
    cout << '\n' << "uppsss you lose the lottery";
  }
} 

int main(){
  //read the file
  ifstream input;
  input.open("LAB12(2)/LAB12_lottery_winner.txt");

  const int arr_size = 7;
  int arr[arr_size];

  for(int i = 0; i < arr_size; i++){
    input >> arr[i];
    
  }

  sort(arr, arr_size);

  int key;
  cout << '\n' << " enter the number that you have = ";
  cin >> key;
  int high = arr_size - 1;
  int low = 0;
  int index = 0;

  BinarySearch(arr, key, arr_size, index, high,low);

  return 0;
}