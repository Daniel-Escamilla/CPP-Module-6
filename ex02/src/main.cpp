/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:46:27 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 16:21:29 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/base.hpp"

int main()
{
	srand(time(0));
	
	Base *random;
	
	random = generate();

	identify(random);
	identify(*random);
	return (0);
}