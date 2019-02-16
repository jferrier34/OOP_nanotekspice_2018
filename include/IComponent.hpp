/*
** EPITECH PROJECT, 2019
** cpp_nanotekspice
** File description:
** IComponent
*/

#ifndef ICOMPONENT_HPP_
#define ICOMPONENT_HPP_

namespace nts
{
    enum Tristate
    {
        UNDEFINED = (-true),
        TRUE = true,
        FALSE = false
    };

    class IComponent
    {
    public:
        typedef std::pair<IComponent *, std::pair<Tristate, Tristate>> link;
        virtual nts::Tristate Compute(size_t pin_num = 1) = 0;
        virtual void SetLink(size_t pin_num, nts::IComponent &component, size_t pin_num_target) = 0;
        virtual void Dump(void) const = 0;
        virtual ~IComponent(void) = 0;
  };
}

#endif /* !ICOMPONENT_HPP_ */
