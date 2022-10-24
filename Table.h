//
// Created by dominik on 24/10/2022.
//
#include "Row.h"
#pragma once
#include <vector>
#include <iostream>
#ifndef SESSION8_TABLE_H
#define SESSION8_TABLE_H


class Table {
public:
    Table();
    std::size_t addRow(Row r);

private:
    std::vector<Row> vr_;
};


#endif //SESSION8_TABLE_H
