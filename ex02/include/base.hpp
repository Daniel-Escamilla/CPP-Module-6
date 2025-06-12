/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:46:22 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 16:12:16 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A: public Base
{
	
};

class B: public Base
{
	
};

class C: public Base
{
	
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
