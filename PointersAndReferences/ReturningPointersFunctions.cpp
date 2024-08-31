/*
    returning pointers from a functions
    Author: Sebastian Sroczyk
    Date: 26/07/2024
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    In C++ functions can return pointers, To do this we must provide the type pointer in the function definition and function prototype.
    This means the function will return an address.

        Example:

                int *largest_int (int *int_ptr1, int *int_ptr2){
                    if (int *int_ptr1 > int *int_ptr2){
                        return int *int_ptr1;
                    }else{
                        return int *int_ptr2;
                    }
                }
    This is how you would call a pointer function:

        Example:    

                int main(){
                    
                    int a{100};
                    int b{200};

                    int *largest_ptr {nullptr};
                    
                    largest_ptr = largest_int(&a,&b);

                    cout << *largest_ptr << endl; // 200

                    return 0;
                }

    Here is a example of dynamically allocating memory in a function then returning the memeory location. This is a common use case for a function that returns a pointer.

        Example:
                int *create_array(size_t size, int init_value = 0);

                int *create_array(size_t size, int init_value){

                    int *new_storage {nullptr};     // Initializes a new pointer to 0

                    new_storage = new int[size];    // Allocates dynamically an array on the heap

                    for (size_t i{0}; i < size; ++i){
                        *(new_storage + i) = init_value;    // Initializes each array element  -- we could of used subscript notation instead of offset notation (i.e. new_storage[i])
                    }

                    return new_storage; // returns address
                }
    
    Here is how it would be called in main.

        Example:

                int main(){
                    int *my_array;
                    my_array = create_array(20,5); // Initilizes my_array to 20 element with the defualt value of 5.

                    // use the array

                    delete [] my_array;
                    return 0;
                }

    HERE IS WHAT NOT TO DO:

        Example:

                int *dont_do_this(){
                    int size{};
                    // ...
                    return &size;
                }

                // OR

                int *or_this(){
                    int size{};
                    int *int_ptr{size};
                    //...
                    return int_ptr;
                }

        The reason we do not does this is becuase functions aer turned on and off in the stack. These pointers and addresses are pointed to a local variable inside
        the function. The functions would have been deactivated by the time it returns the pointer, so the data accessed will be different next time any function 
        is called in the stack. It may be an address that is very important that could crash the program or worse. These types of bugs are very difficult to 
        find as they may work perfectly fine for a while without showing any signs of issues, then suddenly destroying everything on the stack without you knowing
        what even happened.

*/
void display(const int *const array, size_t size);
int *create_array(size_t size, int init_value = 0);


int main(){

    int *my_array;
    size_t size;
    int init_value{};

    cout << "\nHow many intergers would you like to allocate? ";
    cin >> size;
    cout << "\nWhat value woudl you like them to initialize to? ";
    cin >> init_value;

    my_array = create_array(size,init_value); // Initilizes my_array to 20 element with the defualt value of 5.

    cout << "\n-----------------------------------" << endl;

    display(my_array, size);
    delete [] my_array;
    return 0;
}

void display(const int *const array, size_t size){
    for(size_t i {0}; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}


int *create_array(size_t size, int init_value){

    int *new_storage {nullptr};     // Initializes a new pointer to 0

    new_storage = new int[size];    // Allocates dynamically an array on the heap

    for (size_t i{0}; i < size; ++i){
        *(new_storage + i) = init_value;    // Initializes each array element  -- we could of used subscript notation instead of offset notation (i.e. new_storage[i])
    }

    return new_storage; // returns address
}