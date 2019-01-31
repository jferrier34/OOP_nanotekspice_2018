/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4030
*/

#ifndef C4030_HPP_
#define C4030_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
        class Component4030 : public IComponent
        {
        public:
                Component4030(std::string const &value);
                virtual ~Component4030();
                virtual nts::Tristate Compute(size_t pin_num = 1);
                virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
                virtual void Dump(void) const;
        };
}

#endif /* !4030_HPP_ */
