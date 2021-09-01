//------------------------------------
// Dynamic Array Subset Program
// By: Sam Starke
//------------------------------------
#include <iostream>

using namespace std;

int subsets(int size) {
    return 1 << size;
}

int main() {

    int array[0], size, i, max, min;
    cout << "Enter the size of your array: ";
    cin >> size;
    cout << "Enter the elements of your array: ";
    for (i=0;i<size;i++)
        cin >> array[i];
    max = array[0];
    for (i=0;i<size;i++) {
        if (max < array[i])
            max = array[i];
    }
    min = array[0];
    for (i=0;i<size;i++) {
        if (min > array[i])
            min = array[i];
    }
    cout << "Your array: { ";
    for (i=0;i<size;i++) {
        cout << array[i] << " ";
        }
    cout << "}";
    cout << "\nThe amount of subsets in your array is: ";
    cout << subsets(size);
    cout << "\nMinimum element: " << min;
    cout << "\nLargest element: " << max << endl;




    return 0;
}