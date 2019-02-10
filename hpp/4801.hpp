/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** 4801
*/

#ifndef C4801_HPP_
#define C4801_HPP_

#include "IComponent.hpp"
#include <iostream>

namespace nts
{
        class Component4801 : public IComponent
        {
        public:
                Component4801(std::string const &value);
                virtual ~Component4801();
                virtual nts::Tristate Compute(size_t pin_num = 1);
                virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target);
                virtual void Dump(void) const;
        };
}


#endif /* !4801_HPP_ */
