#include <iostream>

using namespace std;


// this function dynamicly allocates the storage on the heap
int *create_arr(size_t size, int value = 0){
    int *heap_mem = nullptr;
    heap_mem = new int[size];
    for(size_t i = 0; i < size; ++i){
        heap_mem[i] = value;
    }
    return heap_mem;
}

// this function displays the array
void display(int *array, size_t size){
    for(size_t i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    
    int value = 4;
    size_t size = 6;
    int *array = nullptr;
    
    array = create_arr(size, value);
    cout << "###################" << endl;
    cout << endl;
    display(array, size);
    cout << "\n###################" << endl;
    delete [] array;  // you always have to release the heap storage
    
    return 0;
}