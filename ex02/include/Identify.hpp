/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 03:15:56 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 03:15:57 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *create();
void identifyPointer(const Base *ptr);
void identifyReference(const Base &ref);

#endif