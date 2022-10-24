#include <iostream>
#include <vector>
#include "Row.h"


namespace task1 {
    class Row {
    public:
        Row(unsigned id) : id_{id} {
            std::cout << "Row object"
                      << std::to_string(id_)
                      << "constructed\n";
        };

        ~Row() {
            std::cout << "id_"
                      << std::to_string(id_)
                      << "greetings from the Row destructor\n";
        };

    private:
        unsigned id_;
    };


    class Table {
    public:
        Table() {
            std::cout << "Table object constructed\n";
        };


        ~Table() {
            std::cout << "greetings from the Table constructor\n";
        };

        std::size_t addRow(Row r) {
            vr_.push_back(r);
            return vr_.size();
        };

    private:
        std::vector<Row> vr_;

    };




}

namespace session7 {

    class Row {
    public:
        Row(unsigned id, std::string c1, std::string c2) : id_{id} , column1_{c1} , column2_{c2} {

        };

        ~Row() {

        };

        std::string to_string() {
            std::string output = std::to_string(id_).append(" ").append(column1_).append(" ").append(column2_);
            return output;
        };

    private:
        unsigned id_;
        std::string column1_;
        std::string column2_;
    };


    class Table {
    public:
        Table() {

        };


        ~Table() {

        };

        std::size_t addRow(Row r) {
            vr_.push_back(r);
            return vr_.size();
        };

    private:
        std::vector<Row> vr_;

    };
}

void tableTest() {
    session7::Table t;
    session7::Row r(5, "A", "B") ;
    //t.addRow(r);
}

void rowTest() {
    for(unsigned i = 0; i < 5; ++i)
    {
        Row r(i, "Column1" , "Column2");
    }
}

void rowToStringTest() {
    std::string expectedResult = "100 abc xyz";

    session7::Row r(100, "abc" , "xyz");

    if(r.to_string() == expectedResult) {
        std::cout << "Row test passed";
    } else {
        std::cout << "Row test failed";
    }
}



int main() {
    tableTest();
    rowTest();
    rowToStringTest();

    return 0;
}