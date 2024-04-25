#include <iostream>

using namespace std;

void print(int *arr, size_t size){
    cout << "[";
    for(size_t i = 0; i < size; ++i){
        cout << arr[i];
    }
    cout << "]" << endl;
}

int *apply_all(int *arr1, size_t size1, int *arr2, size_t size2){
    int position = 0;
    int *new_array = nullptr;
    new_array = new int[size1 * size2];
    
    for(size_t i=0; i < size1; ++i){
        for(size_t j=0; j < size2; ++j){
        new_array[position] = arr1[i] * arr2[j];
        ++position;
        }
    }
    return new_array;
}


int main(){
    
    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};
    
    size_t arr1_size = sizeof(arr1)/sizeof(arr1[0]);
    size_t arr2_size = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << "Array 1: ";
    print(arr1, arr1_size);
    
    cout << endl;
    
    cout << "Array 2: ";
    print(arr2, arr2_size);
    
    
    int *results = apply_all(arr1, arr1_size, arr2, arr2_size);
    
    int result_size = arr1_size * arr2_size;
    
    cout << endl;
    
    cout << "Result: ";
    print(results, result_size);
    
    delete [] results;
    
    
    return 0;
}