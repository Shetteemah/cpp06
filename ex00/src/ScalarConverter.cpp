#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _arg("Default")
{
    std::cout << "Default contstructor initiated!" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string &arg) : _arg(arg)
{
    std::cout << "Constructor for argument has been initiated!" << std::endl;
    
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _arg(copy._arg)
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{}

ScalarConverter::~ScalarConverter()
{}

const std::string ScalarConverter::getArgument(const std::string &arg)
{}

char ScalarConverter::getchar() const
{}

int ScalarConverter::getint() const
{}

float ScalarConverter::getfloat() const
{}

double ScalarConverter::getdouble() const
{}

const char *ScalarConverter::IncorrectScalarException::what() const throw()
{}

std::ostream &operator<<(std::ostream &os, const ScalarConverter &scalar)
{}
