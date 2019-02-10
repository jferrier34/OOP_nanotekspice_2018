/*
** EPITECH PROJECT, 2019
** 4011.cpp
** File description:
** 4011
*/

#include "4011.hpp"

nts::Component4011::Component4011(std::string const &value) {
        this->value = "4011";
}

nts::Component4011::~Component4011()
{
    
}

nts::Tristate Component4011::Compute(size_t pin_num = 1)
{

}

void Component4011::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4011::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4011" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}