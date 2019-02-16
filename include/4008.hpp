/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4008
*/

#ifndef C4008_HPP
#define C4008_HPP_

#include "IComponent.hpp"


namespace nts
{
    class Component4008 : public IComponent
    {
    public:
        Component4008(std::string const &value);
        virtual ~Component4008();
        virtual nts::Tristate Compute(size_t pin_num = 1);
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
        virtual void Dump(void) const;
    };
}

#endif