/*
** EPITECH PROJECT, 2019
** 4017.cpp
** File description:
** 4017
*/

#include "../../include/4017.hpp"

nts::Component4017::Component4017(std::string const &value)
{
        (void)value;
}

nts::Component4017::~Component4017()
{
}

nts::Tristate Component4017::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4017::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4017::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4017" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
