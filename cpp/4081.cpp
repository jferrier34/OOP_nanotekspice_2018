/*
** EPITECH PROJECT, 2019
** 4081.cpp
** File description:
** 4081
*/

nts::Component4801::Component4801(std::string const &value)
{
    this->value;
}

nts::Component4801::~Component4801()
{
    
}

nts::Tristate Component4801::Compute(size_t pin_num = 1)
{

}

void Component4801::SetLink(size_t pin_num, nts::Icomponent &component, size_t pin_num_target)
{
}

void Component4801::Dump(void) const
{
    int i = 1;
    std::cout << "This the chipset 4801" << std::endl;

    while (i < 14) {
        ++i;
        std::cout << "\t pin #" << i << ": ";
    }
    std::cout << "NULL" < std::endl;
}