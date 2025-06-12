/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seralization.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:14:26 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 12:58:25 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Seralization.hpp"

Serializer& Serializer::operator=(const Serializer& copy)
{
    (void)copy;
	return *this;
}

Serializer::Serializer(const Serializer& copy)
{
	(void)copy;
	return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}