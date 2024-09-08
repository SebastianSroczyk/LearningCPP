/*
    Move Constructor - HEADER 
    Author: Sebastian Sroczyk
    Date: 08/09/2024
*/

#include<iostream>

#ifndef _MOVE_H_
#define _MOVE_H_

class Move{
    private:
        int *data_ptr;
    public:
        void set_data_value(int d){ *data_ptr = d;}
        int get_data_value(){return *data_ptr;}
        Move(int d);
        Move(const Move &source);
        Move(Move &&source) noexcept;
        ~Move();
};

#endif