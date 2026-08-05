#include<iostream>
using namespace std;

int binarySearch(int A[], int low, int high) 
{
    int key, mid;
    cout << "Enter element to be searched: ";
    cin >> key;

    while(low <= high) 
    {
        mid = low + (high - low) / 2;
        if(key == A[mid]) 
        {
            return mid;
        }
        if(key > A[mid]) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main() 
{

    int A[] = {2, 3, 5, 7, 9, 11,13,15}; 
    int result = 0, i = 0;

    cout << "Array elements: ";
    
    for(i = 0; i < 7; i++) 
    {
     
    cout << A[i] << " "; 
    
    }
      cout<<endl;

    
    result = binarySearch(A, 0, 7); 

    if(result == -1)
        cout << "\nElement not found" << endl;
    else
        cout << "\nElement found at index " << result << endl;

    return 0;
}
