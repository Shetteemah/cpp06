/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 02:57:06 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 03:06:23 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::_char = 0;
int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0.0f;
double ScalarConverter::_double = 0.0;

ScalarConverter::ScalarConverter()
{
    std::cout << "Default contstructor initiated!" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string &arg) : _arg(arg)
{
    std::cout << "Constructor for argument has been initiated!" << std::endl;
    this->convert(arg);
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _arg(copy._arg)
{
    std::cout << "Copy constructor initiated!" << std::endl;
    (void)copy;
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

void ScalarConverter::convert(const std::string &arg)
{
    if (arg.empty() || (arg.length() == 1 && !isprint(arg[0]))) {
        throw IncorrectScalarException();
    }

    try {
        if (arg.length() == 1 && !isdigit(arg[0])) {
            _char = static_cast<char>(arg[0]);
            _int = static_cast<int>(_char);
            _float = static_cast<float>(_char);
            _double = static_cast<double>(_char);
        } else {
            _int = std::stoi(arg);
            _float = std::stof(arg);
            _double = std::stod(arg);
            _char = (isprint(_int) && _int >= 0 && _int <= 127) ? static_cast<char>(_int) : 0;
        }

        if (isprint(_char) && _char != 0)
            std::cout << "char: '" << bold << _char << reset << "'" << std::endl;
        else
            std::cout << "char: " << red << italics << "Non displayable" << reset << std::endl;

        std::cout << "int: " << bold << _int << reset << std::endl;

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << bold << _float << reset << "f" << std::endl;
        std::cout << "double: " << bold << _double  << reset<< std::endl;
    } catch (const std::exception &e) {
        std::cout << "char: " << red << italics << "impossible" << reset << std::endl;
        std::cout << "int: " << red << italics << "impossible" << reset << std::endl;
        std::cout << "float: " << red << italics << arg << "f" <<reset << std::endl;
        std::cout << "double: " << red << italics <<  arg << reset << std::endl;
    }
}

const char *ScalarConverter::IncorrectScalarException::what() const throw()
{
    return ("Error: Incorrect scalar value!");
}
