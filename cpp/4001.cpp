/*
** EPITECH PROJECT, 2019
** 4001.cpp
** File description:
** 4001
*/

#include "4001.hpp"

Cnts::Component4001::Component4001(std::string const &value)
{
    this->value;
}

nts::Component4001::~Component4001()
{
    
}

nts::Tristate Component4001::Compute(size_t pin_num = 1)
{

}

void Component4001::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4001::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4801" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}