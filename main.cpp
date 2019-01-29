/*                                                                                                                                                                              
** EPITECH PROJECT, 2019                                                                                                                                                        
** main.cpp                                                                                                                                                              
** File description:                                                                                                                                                            
** main.cpp                                                                                                                                                                     
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

void error(int ac)
{
    std::cerr << "USAGE" << std::endl;
}

void verif_error(int ac)
{
    int is_ok = 0;

    if (ac < 2) {
        error();
        exit (84);
    }
}

int main(int ac, char **av)
{
    verif_error(ac);
}