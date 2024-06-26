/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 03:16:11 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 03:16:12 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <cstdlib>
#include <ctime>

typedef struct Data
{
    std::string s1;
    int n;
    std::string s2;
} Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &copy);
        ~Serializer();
        Serializer &operator=(const Serializer &src);

    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif