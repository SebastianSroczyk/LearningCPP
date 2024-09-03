/*
    Shallow copying w/ copy constructors SHALLOW CLASS
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include "Shallow.h"

Shallow::Shallow(int d){
    data = new int;     // Allocates Storage 
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data){
        std::cout << "Copy Constructor - shallow copy" << std::endl;
}

Shallow::~Shallow(){
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}