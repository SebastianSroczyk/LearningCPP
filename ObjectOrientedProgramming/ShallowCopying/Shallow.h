/*
    Shallow copying w/ copy constructors SHALLLOW HEADER 
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include <iostream>

#ifndef _SHALLOW_H_
#define _SHALLOW_H_

class Shallow{
    private:
        int *data;
    public:
        void set_data_value(int d){ *data = d;}
        int get_data_value() {return *data;}

        // Constructor
        Shallow(int d);
        // Copy Constructor
        Shallow(const Shallow &source);
        // Destructor
        ~Shallow();
};

#endif