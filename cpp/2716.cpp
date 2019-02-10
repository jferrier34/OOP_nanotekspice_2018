/*
** EPITECH PROJECT, 2019
** 2716.cpp
** File description:
** 2716
*/

#include "2716.hpp"

nts::Component2716::Component2716(std::string const &value)
{
    this->value;
}

nts::Component2716::~Component2716()
{
}

nts::Tristate Component2716::Compute(size_t pin_num = 1)
{

}

void Component2716::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component2716::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 2716" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
