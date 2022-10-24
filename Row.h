//
// Created by dominik on 24/10/2022.
//
#pragma  once
#include <iostream>
#ifndef SESSION8_ROW_H
#define SESSION8_ROW_H


class Row {

public:
    Row(unsigned id, std::string c1, std::string c2);
    std::string to_string();



private:
    unsigned id_;
    std::string column1_;
    std::string column2_;
};



#endif //SESSION8_ROW_H
