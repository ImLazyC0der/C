#include <iostream>

using namespace std;

#define SIZE 50 //Defining max size of array

int main()

{
    int array[SIZE];
    int i, max, min, size;
    // Input size of the array
    cout<<"Enter size of the array: ";
    cin>>size;
    // Input array elements
    cout<<"\n Enter "<<size <<" elements in the array: ";
    for(i=0; i<size; i++)
        cin>>array[i];
    // Assume first element as maximum and minimum
    max = array[0];
    min = array[0];
    //Find maximum and minimum in all array elements.
    for(i=1; i<size; i++)
    {
    // If current element is greater than max
        if(array[i] > max)
            max = array[i];
        // If current element is smaller than min
        if(array[i] < min)
            min = array[i];
    }
    // Print maximum and minimum element
    cout<<"\nMaximum element =" << max << "\n";
    cout<<"Minimum element =" << min;
    return 0;

}
