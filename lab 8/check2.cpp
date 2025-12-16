#include <iostream>
#include <vector>
using namespace std;

void inPlaceMerge(float arr[], int start, int end, int size) {
    int i = start;
    int j = end + 1;

    // Traverse and merge the two sorted parts in-place
    while (i <= end && j < size) 
    {
        if (arr[i] <= arr[j]) 
        {
            // Element in the first part is already in the correct position
            i++;
        } 
        else
          {
            // Element from the second part is smaller, shift elements and insert it
            float temp = arr[j];
            int k = j;
            while (k > i)
            {
                arr[k] = arr[k - 1]; // Shift elements to the right
                k--;
            }
            arr[i] = temp;

            // Update indices after insertion
            i++;
            end++;
            j++;
         }
    }
}

int main() {
    // Input array with two sorted parts
    float arr[15] = {7, 12, 25, 45, 82, 97, 3, 34, 38, 40, 49, 52, 65, 83, 91};
    int size = 15;
    int start_index = 0;
    int end_index = 5; // First part sorted up to index 5

    // Display array before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array
    inPlaceMerge(arr, start_index, end_index, size);

    // Display array after sorting
    cout << "After Sorting:  ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
