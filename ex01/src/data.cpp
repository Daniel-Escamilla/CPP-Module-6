/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:58:36 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 13:02:39 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

int	Data::getValue()
{
	return (value);
}

void	Data::setValue(int newValue)
{
	value = newValue;
}

Data& Data::operator=(const Data& copy)
{
    if (this != &copy)
        this->value = copy.value;
    return *this;
}

Data::Data(const Data& copy)
{
	value = copy.value;
}
