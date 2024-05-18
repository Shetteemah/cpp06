#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "Default contstructor initiated!" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string &arg) : _arg(arg)
{
    std::cout << "Constructor for argument has been initiated!" << std::endl;
    this->checker();
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _arg(copy._arg)
{
    std::cout << "Copy constructor initiated!" << std::endl;
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
    std::cout << "Operator assignment initiated!" << std::endl;
    if (this != &src)
    {
        this->_char = src._char;
        this->_int = src._int;
        this->_float = src._float;
        this->_double = src._double;
    }
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destroyed!" << std::endl;
}

const std::string ScalarConverter::getArgument()
{
    return (this->_arg);
}

char ScalarConverter::getChar() const
{
    return (this->_char);
}

int ScalarConverter::getInt() const
{
    return (this->_int);
}

float ScalarConverter::getFloat() const
{
    return (this->_float);
}

double ScalarConverter::getDouble() const
{
    return (this->_double);
}

int ScalarConverter::checker()
{
    if (!(!isdigit(_arg[0]) && _arg.length() == true))
    {
        this->_int = this-> _double > 0 ? static_cast<int>(this->_double + 0.5) : static_cast<int>(this->_double - 0.5);
        this->_float = std::stof(_arg);
        this->_double = std::stod(_arg);
        this->_char = static_cast<char>(_arg[0]);
    }
    else
    {
        this->_int = static_cast<int>(_arg[0]);
        this->_float = static_cast<float>(_arg[0]);
        this->_double = static_cast<double>(_arg[0]);
        this->_char = _arg[0];
    }
    return (0);
}

const char *ScalarConverter::IncorrectScalarException::what() const throw()
{
    return ("Error: Incorrect scalar value!");
}

std::ostream &operator<<(std::ostream &os, const ScalarConverter &scalar)
{
    if (scalar.getInt() >= 'A' && scalar.getInt() <= 'Z')
        os << "char: " << scalar.getChar() << std::endl;
    else if (isnan(scalar.getFloat()) || isinf(scalar.getFloat()))
        os << "char: impossible" << std::endl;
    else
        os << "char: " << scalar.getFloat() << ".0f" << std::endl;

    if (isnan(scalar.getFloat()) || isinf(scalar.getFloat()))
        os << "float: impossible" << std::endl;
    else
        os << "float: " << scalar.getFloat() << "f" << std::endl;

    if (isnan(scalar.getDouble()) || isinf(scalar.getDouble()))
        os << "double: impossible" << std::endl;
    else
        os << "double: " << scalar.getDouble() << ".0" << std::endl;
    
    os << "int: " << scalar.getInt() << std::endl;
    return (os);
}
