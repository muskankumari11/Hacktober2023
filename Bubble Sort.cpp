#include <bits/stdc++.h> 
using namespace std; 
void bubbleSort(int arr[], int n) 
{ 
    int i,j; 
    for (i=0;i<n-1;i++)
        for (j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]) 
                swap(arr[j],arr[j+1]); 
} 
void printArray(int arr[],int size) 
{ 
    for(int i=0;i<size;i++)
        cout<<arr[i]<< " ";
}
int main() 
{ 
    int arr[] = { 2,9,10,3,6}; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    bubbleSort(arr, N); 
    cout << "Sorted array: \n"; 
    printArray(arr,N); 
    return 0; 
}
