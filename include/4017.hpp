/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4017
*/

#ifndef C4017_HPP
#define C4017_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
    class Component4017 : public IComponent
    {
    public:
        Component4017(std::string const &value);
        virtual ~Component4017();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif
