#include <iostream>
#include <array>
using namespace std;

array<float, 15> mergeSortedSubarrays(array<float, 15> arr, int mid)
{
   int left = 0;
   int right = mid + 1;
   int index = 0;
   array<float, 15> result;
   while (left <= mid && right <= 14)
   {
      if (arr[left] <= arr[right])
      {
         result[index++] = arr[left++];
      }
      else
      {
         result[index++] = arr[right++];
      }
   }
   while (left <= mid)
   {
      result[index++] = arr[left++];
   }
   while (right <= 14)
   {
      result[index++] = arr[right++];
   }
   return result;
}

int main()
{
   array<float, 15> arr = {7, 12, 25, 45, 82, 97, 3, 34, 38, 40, 49, 52, 65, 83, 91};
   int mid = 5;
   array<float, 15> sortedarr = mergeSortedSubarrays(arr, mid);
   for (int i=0;i<15;i++)
   {
      cout << sortedarr[i] << " ";
   }
   cout << endl;
   return 0;
}