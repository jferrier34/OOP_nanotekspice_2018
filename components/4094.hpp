/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4094
*/

#ifndef C4094_HPP_
#define C4094_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
        class Component4094 : public IComponent
        {
        public:
                Component4094(std::string const &value);
                virtual ~Component4094();
                virtual nts::Tristate Compute(size_t pin_num = 1);
                virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
                virtual void Dump(void) const;
        };
}


#endif /* !4094_HPP_ */
