#pragma once

#include "Rank.h"

#include <string>
#include <string_view>

class Employee
{
public:
    const std::string& get_name() const { return _name; }
    const std::string& get_surname() const { return _surname; }

    unsigned int get_salary() const { return _salary; }
    void         increase_salary(unsigned int raise);

private:
    const std::string _name;
    const std::string _surname;
    unsigned int      _salary;
};
