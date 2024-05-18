#include "../include/ScalarConverter.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: An argument is required!" << std::endl;
        return (1);
    }
    ScalarConverter scalar(argv[1]);
    std::cout << scalar << std::endl;
    return (0);
}