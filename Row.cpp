//
// Created by dominik on 24/10/2022.
//

#include "Row.h"
#include <iostream>

Row::Row(unsigned id, std::string c1, std::string c2)
    : id_{id} , column1_{c1} , column2_{c2} { }

    std::string Row::to_string() {
        std::string output = std::to_string(id_).append(" ").append(column1_).append(" ").append(column2_);
        return output;
}

