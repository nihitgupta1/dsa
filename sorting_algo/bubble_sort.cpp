#include <iostream>
using namespace std;

void BubbleSort(int A[], int n){
  for(int k=0; k<n-1; k++){
    for (int i = 0; i < n-k-1; i++)
    {
      if (A[i] > A[i + 1])
      {
        swap(A[i], A[i+1]);
      }
    }
  }
  }
  

int main()
{
  int A[] = {2, 7, 4, 5, 1, 3};
  BubbleSort(A, 6);
  for (int i = 0; i < 6; i++)
    cout << A[i] << " ";
}