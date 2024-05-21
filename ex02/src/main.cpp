/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheali <sheali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 03:15:53 by sheali            #+#    #+#             */
/*   Updated: 2024/05/21 03:15:54 by sheali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    srand(static_cast<unsigned>(time(NULL)));

    Base *ptr = create();
    if (!ptr)
    {
        std::cerr << "Failed to create object!" << std::endl;
        return (1);
    }

    std::cout << "Identify type from pointer : ";
    identifyPointer(ptr);
    std::cout << "Identify type from reference : ";
    identifyReference(*ptr);

    delete (ptr);
    return (0);
}
