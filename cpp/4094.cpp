/*
** EPITECH PROJECT, 2019
** 4094.cpp
** File description:
** 4094
*/

nts::Component4094::Component4094(std::string const &value)
{
    this->value;
}

nts::Component4094::~Component4094()
{
    
}

nts::Tristate Component4094::Compute(size_t pin_num = 1)
{

}

void Component4094::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4094::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4094" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}