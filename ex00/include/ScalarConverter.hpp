#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <exception>

class ScalarConverter
{
    private:
        const std::string &_arg;
        char _char;
        int _int;
        float _float;
        double _double;
        ScalarConverter();

    public:
        ScalarConverter(const std::string &arg);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &src);
        ~ScalarConverter();

        const std::string getArgument(const std::string &arg);
        char getchar() const;
        int getint() const;
        float getfloat() const;
        double getdouble() const;

    class IncorrectScalarException : virtual public std::exception
    {
        public:
            virtual const char *what() const throw();
    };


};
std::ostream &operator<<(std::ostream &os, const ScalarConverter &scalar);
#endif