/* Here's a brief summary of MY code:

    The merge function correctly merges two sorted arrays into a single sorted array.

    The mergeSort function is the main recursive function that performs the divide-and-conquer approach. It splits the input vector into two halves, recursively sorts each half, and then merges them back together using the merge function.

    The main function initializes an array, converts it to a vector, calls mergeSort to sort the vector, and then prints the sorted vector.   */

#include<bits/stdc++.h>
using namespace std;

// Function to merge two sorted arrays 'a' and 'b' into a single sorted array 'result'
void merge(vector<int>& a, vector<int>& b, vector<int>& result) {
    int i = 0;
    int j = 0;
    int k = 0;

    // Merge elements from arrays 'a' and 'b' into 'result'
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    // If there are remaining elements in 'b', copy them to 'result'
    while (i == a.size() && j < b.size()) {
        result[k++] = b[j++];
    }

    // If there are remaining elements in 'a', copy them to 'result'
    while (j == b.size() && i < a.size()) {
        result[k++] = a[i++];
    }
}

// Main merge sort function which follows the divide and conquer algorithm
void mergeSort(vector<int>& v) {
    int n = v.size(); // Size of the array
    if (n == 1)
        return;

    // Calculate sizes of the two halves
    int n1 = n / 2, n2 = n - n / 2;

    // Create two vectors for the two halves
    vector<int> a;
    vector<int> b;

    // Populate vectors 'a' and 'b' with elements from the original vector 'v'
    for (int i = 0; i < n1; i++) {
        a.push_back(v[i]);
    }

    for (int i = 0; i < n2; i++) {
        b.push_back(v[n1 + i]);
    }

    // Recursively sort the two halves
    mergeSort(a);
    mergeSort(b);

    // Merge the sorted halves back into the original vector 'v'
    merge(a, b, v);
}

int main() {
    // Given array
    int arr[] = {1, 2, 3, 5, 2, 677, 9, 6, 2, 54, 89, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Convert the array to a vector for dynamic memory access
    vector<int> v(arr, arr + n);

    // Call the mergeSort function to sort the vector
    mergeSort(v);

    // Print the sorted vector
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }

    return 0;
}
