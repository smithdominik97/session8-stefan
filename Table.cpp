//
// Created by dominik on 24/10/2022.
//

#include "Table.h"
#include "Row.h"

Table::Table() = default;

std::size_t Table::addRow(Row r) {
    vr_.push_back(r);
    return vr_.size();
}
