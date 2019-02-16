/*
** EPITECH PROJECT, 2019
** 4017.cpp
** File description:
** 4017
*/

#include "4017.hpp"

nts::Component2716::Component2716(std::string const &value)
{
        (void)value;
}

nts::Component2716::~Component2716()
{
}

nts::Tristate Component2716::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component2716::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
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
