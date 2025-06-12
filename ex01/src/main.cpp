/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:14:30 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 14:01:32 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Seralization.hpp"

int main()
{
    Data original;
    original.setValue(42);

    std::cout << "Original pointer : " << &original << std::endl;
    std::cout << "Original value   : " << original.getValue() << std::endl;

    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "Serialized value : " << raw << std::endl;

    Data* recovered = Serializer::deserialize(raw);
    std::cout << "Recovered pointer: " << recovered << std::endl;
    std::cout << "Recovered value  : " << recovered->getValue() << std::endl;

    return 0;
}
