/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4514
*/

#ifndef C4514_HPP_
#define C4514_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
    class Component4514 : public IComponent
    {
    public:
        Component4514(std::string const &value);
        virtual ~Component4514();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif
