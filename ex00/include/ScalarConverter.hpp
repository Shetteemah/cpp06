#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <exception>

class ScalarConverter
{
    private:
        const std::string &_param;
        char _char;
        int _int;
        float _float;
        double _double;
        ScalarConverter();

    public:
        ScalarConverter(const std::string &param);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &src);
        ~ScalarConverter();

    class IncorrectScalarException : virtual public std::exception
    {
        public:
            virtual const char *what() const throw();
    };


};
#endif