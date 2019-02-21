/*
** EPITECH PROJECT, 2019
** 4069.cpp
** File description:
** 4069
*/

#include "../../include/4069.hpp"

nts::Component4069::Component4069(std::string const &value)
{
        (void)value;
}

nts::Component4069::~Component4069()
{
}

nts::Tristate Component4069::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4069::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4069::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4069" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
