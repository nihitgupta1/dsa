#include <iostream>
using namespace std;

void Merge(int arr[], int left[], int nL, int right[], int nR){
  int i=0;
  int j=0;
  int k=0;
  while(i<nL && j<nR){
    if(left[i] <= right[j]){
      arr[k] = left[i];
      i++;
    }
    else{
      arr[k] = right[j];
      j++;
    }
    k++;
  }
  while(i < nL){
    arr[k] = left[i];
    k++;
    i++;
  }
  while (j < nR)
  {
    arr[k] = right[j];
    k++;
    j++;
  }
}

void MergeSort(int arr[], int n){
  if(n<2) return;

  int mid = n/2;
  int left[mid];
  int right[n-mid];

  for(int i=0; i<mid; i++)
    left[i] = arr[i];

  for(int i=mid; i<n; i++)
    right[i-mid] = arr[i];

  MergeSort(left, mid);
  MergeSort(right, n-mid);
  Merge(arr,left,mid,right,n-mid);
}

int main()
{
  int arr[] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};
  int i, numberOfElements;
  numberOfElements = sizeof(arr) / sizeof(arr[0]);

  MergeSort(arr, numberOfElements);

  for (i = 0; i < numberOfElements; i++)
    cout<<arr[i]<<" ";
  return 0;
}