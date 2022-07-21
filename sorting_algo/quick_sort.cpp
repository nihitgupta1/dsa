#include <iostream>
using namespace std;

int Partition(int arr[], int start, int end){
  int pivot = arr[end];
  int partitionIndex = start;
  for(int i=start; i<end; i++){
    if(arr[i] <= pivot){
      swap(arr[i], arr[partitionIndex]);
      partitionIndex++;
    }
  }
  swap(arr[partitionIndex], arr[end]);
  return partitionIndex;
}

void QuickSort(int arr[], int start, int end){
  if(start < end){
    int partitionIndex = Partition(arr,start,end);
    QuickSort(arr, start, partitionIndex-1);
    QuickSort(arr, partitionIndex+1, end);
  }
}

int main(){
  int arr[] = {3,5,1,7,9,2,22,14};
  QuickSort(arr,0,7);
  for(int i=0; i<8; i++)
    cout<<arr[i]<<" ";
}