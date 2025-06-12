/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:42:19 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 10:34:49 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <sstream>
#include <cmath>
#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();

		static bool parseLiteral(const std::string& str, double& out);
		static bool hasDecimalPart(double value);
		static void printWithFormat(double value, bool isFloat);

		static bool	isValidNumericLiteral(const std::string& str);
		static void limits(const std::string& str);
		
		static void printChar(int value);
		static void printInt(double value);
		static void printFloat(double value);
		static void printDouble(double value);

	public:
		static void convert(const std::string& literal);
};

#endif

