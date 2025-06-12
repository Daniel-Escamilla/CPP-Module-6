/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seralization.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:59:42 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 13:00:24 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Seralization_HPP
# define Seralization_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	public:
		Serializer() {};
		~Serializer() {};
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& copy);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
