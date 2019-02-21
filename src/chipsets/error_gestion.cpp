/*
** EPITECH PROJECT, 2019
** error_gestion.cpp
** File description:
** error_gestion
*/


#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>

void error_endler(int ac, char **av)
{
    if (ac < 2)
        exit(84);
    std::string tmp(av[1]);
    std::ifstream file;
    file.open(av[1]);
    if (!file.is_open())
        exit(84);
    if (tmp.substr(tmp.find_last_of(".") + 1) != "nts")
        exit (84);
}

int main(int ac, char **av)
{
    error_endler(ac, av);
}
