#include <iostream>
using namespace std;

void InsertionSort(int A[], int n){
  for(int i=1; i<n; i++){
    int value = A[i];
    int hole = i;
    while(hole>0 && A[hole-1]>value){
      A[hole] = A[hole-1];
      hole--;
    }
    A[hole] = value;
  }
}

int main()
{
  int A[] = {2, 7, 4, 5, 1, 3};
  InsertionSort(A, 6);
  for (int i = 0; i < 6; i++)
    cout << A[i] << " ";
}