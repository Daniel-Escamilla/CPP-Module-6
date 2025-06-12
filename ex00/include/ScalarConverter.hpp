/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:42:19 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 13:32:03 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter &operator=(const ScalarConverter& copy);

		static bool parseLiteral(const std::string& str, double& out);
		static bool hasDecimalPart(double value);
		static void printWithFormat(double value, bool isFloat, const std::string& originalStr);

		static bool	isValidNumericLiteral(const std::string& str);
		static void limits(const std::string& str);
		
		static void printChar(int value);
		static void printInt(double value);
		static void printFloat(double value, const std::string& str);
		static void printDouble(double value, const std::string& str);

		static int	getDecimalPrecision(const std::string& str);

	public:
		static void convert(const std::string& literal);
};

#endif

