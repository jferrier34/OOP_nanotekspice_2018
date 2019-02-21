/*
** EPITECH PROJECT, 2019
** 4071.cpp
** File description:
** 4071
*/

#include "../../include/4071.hpp"

nts::Component4071::Component4071(std::string const &value)
{
        (void)value;
}

nts::Component4071::~Component4071()
{
}

nts::Tristate Component4071::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4071::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4071::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4071" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
