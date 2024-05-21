/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 03:12:36 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 03:15:45 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base()
{
    std::cout << "Base: destroyed!" << std::endl;
}

Base *create()
{
    int i = rand() % 3;
    if (i == 0)
    {
        A *ptrA = new A;
        std::cout << "A has been created!" << std::endl;
        return (ptrA);
    }
    else if (i == 1)
    {
        B *ptrB = new B;
        std::cout << "B has been created!" << std::endl;
        return (ptrB);
    }
    else
    {
        C *ptrC = new C;
        std::cout << "C has been created!" << std::endl;
        return (ptrC);
    }
}

void identifyPointer(const Base *ptr)
{
    if (dynamic_cast<const A *>(ptr))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<const B *>(ptr))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<const C *>(ptr))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identifyReference(const Base &ref)
{
    try
    {
        const A &a = dynamic_cast<const A &>(ref);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch (const std::bad_cast &)
    {
        try
        {
            const B &b = dynamic_cast<const B &>(ref);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch (const std::bad_cast &)
        {
            try
            {
                const C &c = dynamic_cast<const C &>(ref);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch (const std::bad_cast &)
            {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}
