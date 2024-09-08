/*
    Move Constructor - Class 
    Author: Sebastian Sroczyk
    Date: 08/09/2024
*/

#include "Move.h"

// Constructor
Move::Move(int d){
    data_ptr = new int;
    *data_ptr = d;
    std::cout << "Constructor for: " << d << std::endl;
}

// Copy Constructor
Move::Move(const Move &source)
    : Move{*source.data_ptr}{
        std::cout << "Copy constructor - Deep Coping for: " << *data_ptr << std::endl;
}

// Move Constructor
Move::Move(Move &&source) noexcept
    : data_ptr{source.data_ptr}{
        source.data_ptr = nullptr;
        std::cout << "Moving data: " << *data_ptr << std::endl;
}

Move::~Move(){
    if(data_ptr != nullptr){
        std::cout << "Destructor freeing data for: " << *data_ptr << std::endl;
    }else{
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
}
