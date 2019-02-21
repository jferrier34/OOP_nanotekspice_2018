/*
** EPITECH PROJECT, 2019
** 4008.cpp
** File description:
** 4008
*/

#include "../../include/4008.hpp"

nts::Component4008::Component4008(std::string const &value)
{
        (void)value;
}

nts::Component4008::~Component4008()
{
}

nts::Tristate Component4008::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4008::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4008::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4008" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
