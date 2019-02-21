/*
** EPITECH PROJECT, 2019
** 4081.cpp
** File description:
** 4081
*/

#include "../../include/4081.hpp"

nts::Component4081::Component4081(std::string const &value)
{
        (void)value;
}

nts::Component4081::~Component4081()
{
}

nts::Tristate Component4081::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4081::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4081::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4081" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
