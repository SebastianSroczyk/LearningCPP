/*
    Dynamic Memory Allocation
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>

using namespace std;

/*
    We don't know how much storage will be needed until we need it. We can allocate storage for a vaiable at run time. This is simular to how we must know the size
    of the array before we can use it. Pointers can be used to access newly allocated heap storage. 

    We can allocate storage by using the "new" keyword to allocate storage at run time.

        Example: 
                
                int *int_ptr{nullptr};

                int_ptr = new int;          // Allocates an integer on the heap

                cout << int_ptr << endl;    // 0x7d1390

                cout << *int_ptr << endl;   // -1163005939 - rubbish

                *int_ptr = 100;

                cout << *int_ptr << endl;   // 100
        
        NOTE: This storage is on the heap. Allocated Heap Storage DOESN'T have a name, The only way to access it is with a pointer. If a pointer is lost or reassigned 
              from the heap storage, there will be no access to it again. Which will cause a memory leak (This is very bad). 

    After the storage is used and we are done with it we must deallocate this storage, as the heap is finite. 
    We can do this by using the "delete" keyword.

        Example: 

                int *int_ptr{nullptr};

                int_ptr = new int;          // Allocates an integer on the heap

                ...

                delete int_ptr;             // frrees teh allocated storage

    This is how we alloacte and deallocate storage for an array:

        Example:

                int *array_ptr {nullptr};
                int size{};

                cout << "How big doe you want the array?";
                cin size;

                array_ptr = new int[size];      // allocate array on the heap

                // we can access the array here

                delete [] array_ptr;            // free allocated storage
                 
    NOTE: Remember the [] after the delete when freeing up space from an array.


    MEMORY LEAK EXCEPTION:

        terminated called after throwing an instance of 'std:bad_alloc'
            what(): std::bad_alloc


*/

int main(){

    // holds addresses of int
    int *int_ptr{nullptr};

    int_ptr = new int;  // Allocates storage on heap

    cout << int_ptr << endl;    // Display memeory location of int_ptr on the heap - 0xf1390

    delete int_ptr;     // Frees up the storage


    double *temp_ptr{nullptr};
    size_t size {0};

    cout << "\nHow many temps? ";
    cin >> size;

    temp_ptr = new double[size];

    cout << temp_ptr << endl; // The memory location of the first temp stored in the heap - 0x81c410

    delete [] temp_ptr;  

    return 0;
}