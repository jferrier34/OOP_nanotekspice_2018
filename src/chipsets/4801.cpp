/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4801
*/

#include "../../include/4801.hpp"

nts::Component4801::Component4801(std::string const &value)
{
        (void)value;
}

nts::Component4801::~Component4801()
{
}

nts::Tristate Component4801::Compute(size_t pin_num = 1)
{
        (void)pin_num;
        return (nts::Tristate::UNDEFINED);

void Component4801::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
        (void)pin_num;
        (void)component;
        (void)pin_num_target;
}

void Component4801::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4801" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
