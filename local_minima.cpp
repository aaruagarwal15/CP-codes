#include<iostream>
using namespace std;

int localMinima(int arr[], int left, int right, int n) {
   int mid = left + (right - left)/2;
   if ((mid == 0 || arr[mid-1] > arr[mid]) && (mid == n-1 || arr[mid+1] > arr[mid]))
      return mid;
   else if (mid > 0 && arr[mid-1] < arr[mid])
      return localMinima(arr, left, (mid -1), n);
   return localMinima(arr, (mid + 1), right, n);
}
int findLocalMinima(int arr[], int n) {
   return localMinima(arr, 0, n-1, n);
}
int main() {
   int arr[] = {1,2,3,14,5,7,8};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Local minima is: " << arr[findLocalMinima(arr, n)];
}