/*
    What are Recursive Functions?
    Author: Sebastian Sroczyk
    Date: 24/07/2024
*/

#include <iostream>
#include <string>


using namespace std;

/*
        Recursive Function - A function that calls itself, the function can call itself either directly or indirectly through another function. If we end up with more than 2 activation
                             records on the stack for the same function we have a recursion. Recursive Functions always have a base case and a recursive case.

                             Recursive problem solving can be difficult for beginners but can be used in many applications. These include but are not limited to:

                                    - Mathematic: factorial, fibonacci , fractals...
                                    - Searching and sorting: binary search, search trees... 

                            Example - Factorial:

                                Base case:
                                    factorial(0) = 1
                                
                                Recursive case:
                                    factorial(n) = n * factorial(n-1)
                            
                            Example - Factorial C++:

                                unsigned long long factorial (unsigned long long n){
                                   if(n ==0){
                                       return 1;   // Base case
                                   }
                                   return n * factorial(n-1); // recursive case
                                }

                                int main(){

                                    cout << factorial(8) << endl; // 40320
                                    return 0;
                                }

                            
                            Example - Fibinacci:

                                Base case:
                                    Fib(0) = 0
                                    Fib(1) = 1
                                
                                Recursive case:
                                    Fib(n) = Fib(n-1) + Fib(n-2)

                            Example - Fibinacci C++:

                                unsigned long long fibinacci(unsigned long long n){
                                    if( n <= 1){        // base case
                                        return n;
                                    }
                                    return fibinacci(n-1) + fibinacci(n-2); // recursive case
                                }
                                int main(){

                                    cout << fibinacci(30) << endl; // 832040
                                    return 0;
                                }


        NOTE: Recursion is a type of iteration and should only be used when it makes sense to use it. If done wrong or miss used, it can lead to a stack overflow.


*/


unsigned long long factorial(unsigned long long n);
unsigned long long fibinacci(unsigned long long n);


int main(){

    cout << "Factorial of 10 " << factorial(10) << endl;
    cout << "Fibinacci of 10 " << fibinacci(10) << endl;

    return 0;
}

unsigned long long factorial (unsigned long long n){
    if(n ==0){
        return 1;   // Base case
    }
    return n * factorial(n-1); // recursive case
}

unsigned long long fibinacci(unsigned long long n){
    if( n <= 1){        // base case
        return n;
    }
    return fibinacci(n-1) + fibinacci(n-2); // recursive case
}