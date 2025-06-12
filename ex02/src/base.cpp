/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:46:24 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 16:24:53 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/base.hpp"

Base* generate(void)
{
	int n = rand() % 3 + 1;
	if (n == 1)	
		return (new A);
	if (n == 2)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify class A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Identify class B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Identify class C\n";
	else
		std::cout << "Unknown\n";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identify class A\n";
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identify class B\n";
	}
	catch (...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identify class C\n";
	}
	catch (...) {}
}