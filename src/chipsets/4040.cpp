/*
** EPITECH PROJECT, 2019
** 4040.cpp
** File description:
** 4040
*/

#include "../../include/4040.hpp"

nts::Component4040::Component4040(std::string const &value)
{
        (void)value;
}

nts::Component4040::~Component4040()
{
}

nts::Tristate Component4040::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4040::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4040::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4040" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
