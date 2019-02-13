/*
** EPITECH PROJECT, 2019
** error_gestion.cpp
** File description:
** error_gestion
*/

error_endler(int argc, char **argv)
{
    if (argc < 2)
        exit(84);
    std::string tmp(argv[1])
    std::ifstream file;
    file.open(argv[1]);
    if (!file.is_open())
        exit(84);
    if (tmp.substr(tmp.find_last_of(".") + 1) != "nts")
        exit (84);
}

int main(int argc, char **argv)
{
    error_endler(argc, argv)
}
