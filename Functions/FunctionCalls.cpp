/*
    How function calls work
    Author: Sebastian Sroczyk
    Date: 24/07/2024
*/

#include <iostream>
#include <string>

using namespace std;

/*
    Functions use the 'function call stack':
        It is like a stack of dishes, you must remove the top one off first before you remove any more, It works on the LIFO principal
        (Last In First Out). Stacks also use the terms Push - when you put an item on top of the stack, and Pop - when you remove the item from the top of the stack.

    Stack Frame/Activation Records:
        This is a collection of information that represents active functions. This is where parameters are stored, local varaibles, return addresses and more.
        Each time a Function is called an activation records is created and it is pushed onto the call stack, after the function terminates it's activation record
        gets popped off the call stack. Now the top of the stack is the function that called this now popped off funciton.

        NOTE: We CANNOT jump into the middle of the stack, we must follow the LIFO principal. ALSO the call STACK IS FINITE in size. Activating too many functions on the callstack
              and we will get a stack overflow error, as it is possible to run out of stack space. This will terminate the program.
        
    Inline Functions:
        Sometimes we have simple functions and the function call overhead might be greater than the time executing the function. In cases like this we can tell the compiler,
        to generate inline code. Inline code is inline assembly code that avoids the function call overhead.

        Inline code is generaly faster, but if you inline a function may times, you are duplicating function code in many places which could lead to larger binaries. 
        
        NOTE: Compliers are very sophisticated and will likely inline even wihtout your suggestion. Also inine functions are usualy declared in the header or .h files,
              since the definition must be avaiable to all files that use it.

        Example of syntax for an inline function:

        
            inline int add_numbers(int a, int b){
                return a + b;
            }

            int main(){

                int result{0};
                result = add_numbers(100,200); // call
                return 0;
            }
        
*/

int func1(int a, int b);
void func2(int &x, int y, int z);

/*
    What typically happens when main calls function1 (or any other function calls another)?
    This is just a general example without all the details of what goes into a stack call:

    main: 
        push space for the return value
        push space for the parameters
        push the return address
        transfer control to func1 (jmp - ASSEMBLE Language funcion we don't need to worry about)

    func1:
        push the address of the previous activation record (i.e. Moves the stack pointer to the top of the stack)
        push any register  values that will need to be restored before returning to the caller
        preform the code in func1
        restore the register values
        restore the previous activation record (i.e Moves the stack pointer down to the previous top)
        store any function result (main provided address to store)
        transfer control to the return address (jmp)
    
    main:
        pop the parameters
        pop the return value


*/

int main(){

    int x{10};
    int y{20};
    int z{};

    z = func1(x,y);
    cout << z << endl;


    return 0;
}

void func2(int &x,int  y,int  z){
    x += y + z;
}

int func1(int a, int b){
    int result{};
    result = a + b;
    func2(result, a, b);
    return result;
}