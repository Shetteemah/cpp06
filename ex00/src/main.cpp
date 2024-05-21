/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 02:57:04 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 02:57:05 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: An argument is required!" << std::endl;
        return (1);
    }
    ScalarConverter scalar(argv[1]);
    return (0);
}