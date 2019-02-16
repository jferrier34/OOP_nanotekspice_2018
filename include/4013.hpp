/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4013
*/

#ifndef C4013_HPP
#define C4013_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
    class Component4013 : public IComponent
    {
    public:
        Component4013(std::string const &value);
        virtual ~Component4013();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif
