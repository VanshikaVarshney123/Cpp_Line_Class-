#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[100] = {2, 4, 6, 8, 10}; // Initial array
    int size = 5; // Current size of the array

    int positionToDelete = 2; // Index of the element to delete

    // Update the code to shift elements to fill the gap left by the deleted element
    for(int  i = positionToDelete; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    
    

    // Update the size of the array
    size--;

    // Print the updated array
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}