/*
** EPITECH PROJECT, 2019
** create_components.cpp
** File description:
** create_components.cpp
*/

#include <string>
#include <iostream>
#include <map>

#include "IComponent.cpp"
#include "Component.cpp"
#include "Clock.hpp"
#include "2716.hpp"
#include "4001.hpp"
#include "4008.hpp"
#include "4011.hpp"
#include "4013.hpp"
#include "4017.hpp"
#include "4030.hpp"
#include "4040.hpp"
#include "4069.hpp"
#include "4071.hpp"
#include "4081.hpp"
#include "4094.hpp"
#include "4514.hpp"
#include "4801.hpp"

nts::create_components::IComponent *new2716(const std::string &name) const
{
    return (new 2716(name));
}

nts::create_components::IComponent *new4001(const std::string &name) const
{
    return (new 4001(name));
}

nts::create_components::IComponent *new4008(const std::string &name) const
{
    return (new 4008(name));
}

nts::create_components::IComponent *new4011(const std::string &name) const
{
    return (new 4011(name));
}

nts::create_components::IComponent *new4013(const std::string &name) const
{
    return (new 4013(name));
}

nts::create_components::IComponent *new4017(const std::string &name) const
{
    return (new 4017(name));
}

nts::create_components::IComponent *new4030(const std::string &name) const
{
    return (new 4030(name));
}

nts::create_components::IComponent *new4040(const std::string &name) const
{
    return (new 4040(name));
}

nts::create_components::IComponent *new4069(const std::string &name) const
{
    return (new 4069(name));
}

nts::create_components::IComponent *new4071(const std::string &name) const
{
    return (new 4071(name));
}

nts::create_components::IComponent *new4081 (const std::string &name) const
{
    return (new 4081(name));
}

nts::create_components::IComponent *new4094(const std::string &name) const
{
    return (new 4094(name));
}

nts::create_components::IComponent *new4514(const std::string &name) const
{
    return (new 4514(name));
}

nts::create_components::IComponent *new4801(const std::string &name) const
{
    return (new 4801(name));
}

nts::create_components::IComponent *newClock(const std::string &name) const
{
    return (new Clock(name));
}