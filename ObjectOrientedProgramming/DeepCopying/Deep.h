/*
    Deep Copying w/ copy constructors DEEP HEADER 
    Author: Sebastian Sroczyk
    Date: 03/09/2024
*/

#include <iostream>
#include <String>

#ifndef _DEEP_H_
#define _DEEP_H_

class Deep{
    private:
        int *data;
    public:
        void set_data_value(int d){ *data = d;}
        int get_data_value() {return *data;}

        Deep(int d);
        Deep(const Deep &source);
        ~Deep();

};
#endif