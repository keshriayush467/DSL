#include <iostream>
using namespace std;

// Function to merge two subarrays
void merge(float arr[], int l, int m, int r) {
    float temp[r - l + 1];
    int left = l;
    int right = m + 1;
    int k = 0;
    
    while (left <= m && right <= r) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
        }
    }
    
    while (left <= m) {
        temp[k++] = arr[left++];
    }
    
    while (right <= r) {
        temp[k++] = arr[right++];
    }
    
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l]; // Adjust index for temp array
    }
}

// Function to perform merge sort
void mergeSort(float arr[], int l, int r) 
{
    if (l >= r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    
    float percentages[n];
    cout << "Enter the percentage of students: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> percentages[i];
    }
    
    mergeSort(percentages, 0, n - 1);
    
    cout << "Sorted percentages in ascending order: " << endl;
    for (int i = 0; i < n; i++) {
        cout << percentages[i] << " ";
    }
    cout << endl;
    
    cout << "Top five scores: " << endl;
    int start = (n - 5) >= 0 ? (n - 5) : 0;  
    for (int i = start; i < n; i++) {
        cout << percentages[i] << " ";
    }
    cout << endl;
    
    return 0;
}
