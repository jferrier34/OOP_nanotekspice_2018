/*
** EPITECH PROJECT, 2019
** 4030.cpp
** File description:
** 4030
*/

nts::Component4030::Component4030(std::string const &value)
{
    this->value;
}

nts::Component4030::~Component4030()
{
    
}

nts::Tristate Component4030::Compute(size_t pin_num = 1)
{

}

void Component4030::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4030::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4030" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}
