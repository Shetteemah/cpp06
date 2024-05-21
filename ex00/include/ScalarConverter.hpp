/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 02:57:00 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 02:57:01 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <iomanip>
#include <exception>

const std::string bold = "\033[1m";
const std::string italics = "\033[3m";
const std::string underline = "\033[4m";
const std::string box = "\033[51m";
const std::string red = "\033[31m";
const std::string reset = "\033[0m";

class ScalarConverter
{
    private:
        const std::string _arg;
        static char _char;
        static int _int;
        static float _float;
        static double _double;
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &src);

    public:
        ScalarConverter(const std::string &arg);
        ~ScalarConverter();

        const std::string getArgument();
        char getChar() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const;
        static void convert(const std::string &arg);

    class IncorrectScalarException : virtual public std::exception
    {
        public:
            virtual const char *what() const throw();
    };


};
#endif