/*
** EPITECH PROJECT, 2019
** 4514.cpp
** File description:
** 4514
*/

nts::Component4514::Component4514(std::string const &value)
{
    this->value;
}

nts::Component4514::~Component4514()
{
    
}

nts::Tristate Component4514::Compute(size_t pin_num = 1)
{

}

void Component4514::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4514::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4514" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}

