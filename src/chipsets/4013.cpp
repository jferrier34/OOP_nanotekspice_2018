/*
** EPITECH PROJECT, 2019
** 4013.cpp
** File description:
** 4013
*/

#include "../../include/4013.hpp"

nts::Component4013::Component4013(std::string const &value)
{
        (void)value;
}

nts::Component4013::~Component4013()
{
}

nts::Tristate Component4013::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4013::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4013::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4013" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
