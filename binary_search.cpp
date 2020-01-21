/*Binary Search is a method to find the required element in a sorted array by repeatedly halving the array and searching in the half.
*/

#include <iostream>

class binarySearch {
    public:
    int searchElement(int arr[], int left, int right, int number)
    {
        while (left <= right) {
            int mid = left + (right - left) / 2;
    
            // Check if x is present at mid
            if (arr[mid] == number)
                return mid;
    
            // If x greater, ignore left half
            if (arr[mid] < number)
                left = mid + 1;
    
            // If x is smaller, ignore right half
            else
                right = mid - 1;  
        }
        // if we reach here, then element was
        // not present
        std::cout << "\nElement " << number << " is not present in array \n";
        return -1;

    }

    //https://www.tutorialspoint.com/how-to-use-std-sort-to-sort-an-array-in-cplusplus
    int sorting (int arr[], const int size) {
    std::sort(arr, arr+size); 
    std::cout << "\nArray after sorting using default sort is : \n"; 
    for (int i = 0; i < size; ++i) 
        std::cout << arr[i] << " "; 
    return 0; 
}
};

int main()
{
    int arr[] = { 2, 4, 1, 10, 40 };
    int elementOfArray = 3;
    int countOfElements = sizeof(arr) / sizeof(arr[0]);

    binarySearch s;
    s.sorting(arr, 5);
    int result = s.searchElement(arr, 0, countOfElements - 1, elementOfArray);
    if (result != -1) {
        std::cout << "\nElement " <<elementOfArray << " is present at index " << result << "\n";
    }
    return 0;
}

