/*
    Deep Copying w/ copy constructors DEEP CLASS  
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include "Deep.h"

Deep::Deep(int d){
    data = new int;     // Allocates Storage 
    *data = d;
}
/*
Deep::Deep(const Deep &source){
    data = new int;         // Allocates Storage
    *data = *source.data;       // Copies source data to new storage
    std::cout << "Copy Constructor - Deep copy" << std::endl;
}
*/
Deep::Deep(const Deep &source)
    : Deep{*source.data}{
        std::cout << "Copy Constructor - Deep copy" << std::endl;
}

Deep::~Deep(){
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}
