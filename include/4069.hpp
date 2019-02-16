/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4069
*/

#ifndef C4069_HPP_
#define C4069_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
    class Component4069 : public IComponent
    {
    public:
        Component4069(std::string const &value);
        virtual ~Component4069();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif