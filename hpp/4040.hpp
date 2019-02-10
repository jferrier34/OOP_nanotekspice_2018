/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4040
*/

#ifndef C4040_HPP_
#define C4040_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
        class Component4040 : public IComponent
        {
        public:
                Component4040(std::string const &value);
                virtual ~Component4040();
                virtual nts::Tristate Compute(size_t pin_num = 1);
                virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
                virtual void Dump(void) const;
        };
}


#endif /* !4040_HPP_ */
