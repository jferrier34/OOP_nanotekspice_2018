/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 2716
*/

#ifndef C2716_HPP_
    #define C2716_HPP_

#include "IComponent.hpp"
#include <iostream>


namespace nts
{
    class Component2716 : public IComponent
    {
    public:
        Component2716(std::string const &value);
        virtual ~Component2716();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif