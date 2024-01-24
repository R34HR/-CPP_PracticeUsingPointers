#include <iostream>
#include <string>

using namespace std;


/* This functions recieves two arrays with their respective sizes and returns a 
 pointer to a dynamically allocated array that holds the result of each number
 of both arrays being multiplied against each other */
int *apply_multi (const int *arr1, const int *arr2, size_t sizeArr1, size_t sizeArr2){
    int *ret_arr {nullptr};
    ret_arr = new int [sizeArr1 * sizeArr2];

    int curr_pos {0};

    for(int i {0}; i < sizeArr1; i++){
        for (int j {0}; j < sizeArr2; j++){

            ret_arr[curr_pos] = arr1[i] * arr2[j];

            curr_pos++;

        }
    }

    return ret_arr;
}

// Prints results in a formatted way, all arrays are const since we are not modifying the array, only displaying
void print (const int *arr, const int *arr1, const int *arr2, size_t size_arr, size_t size_arr1, size_t size_arr2){
  
    int curr_pos {0};
    for(int i {0}; i < size_arr1; i++){
        for (int j {0}; j < size_arr2; j++){

            cout << arr1[i]  << "x" << arr2[j] << " = " << arr[curr_pos] << endl;
            curr_pos++;

        }
    }

}

int main () {

    int *arr_ptr {nullptr};
    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};

    cout << "\n arrays beings mutliplied with one produces:" << endl;

    arr_ptr = apply_multi(array1, array2, 5, 3); 

    print (arr_ptr, array1, array2, (5*3), 5, 3); 

    delete [] arr_ptr;


    return 0;
}