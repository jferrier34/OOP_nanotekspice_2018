/*
** EPITECH PROJECT, 2019
** create_components.hpp
** File description:
** create_components.hpp
*/

#ifndef _CREATE_COMPONENTS_HPP_
#define _CREATE_COMPONENTS_HPP_

#include <string>
#include <map>
#include <iostream>
#include "IComponent.hpp"
#include "all_components.hpp"

namespace nts
{
    class create_components
    {
        public:
            create_components();
            ~create_components();
        private:
            IComponent *new2716(const std::string &name) const;
            IComponent *new4001(const std::string &name) const;
            IComponent *new4008(const std::string &name) const;
            IComponent *new4011(const std::string &name) const;
            IComponent *new4013(const std::string &name) const;
            IComponent *new4017(const std::string &name) const;
            IComponent *new4030(const std::string &name) const;
            IComponent *new4069(const std::string &name) const;
            IComponent *new4071(const std::string &name) const;
            IComponent *new4081(const std::string &name) const;
            IComponent *new4094(const std::string &name) const;
            IComponent *new4514(const std::string &name) const;
            IComponent *new4801(const std::string &name) const;
            IComponent *newClock(const std::string &name) const;
    }
}

#endif