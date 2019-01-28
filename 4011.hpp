/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4011
*/

#ifndef C4011_HPP_
#define C4011_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
        class Component4011 : public IComponent
        {
        public:
                Component4011(std::string const &value);
                virtual ~Component4011();
                virtual nts::Tristate Compute(size_t pin_num = 1);
                virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
                virtual void Dump(void) const;
        };
}

#endif /* !4011_HPP_ */
