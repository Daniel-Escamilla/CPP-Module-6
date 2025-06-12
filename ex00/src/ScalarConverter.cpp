/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:42:33 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 10:45:47 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

void ScalarConverter::printChar(int value)
{
	std::cout << "char: ";
	if (value >= 32 && value <= 126)
		std::cout << static_cast<char>(value) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::printInt(double value)
{
	std::cout << "int: ";
	if (value < static_cast<double>(std::numeric_limits<int>::min()) ||
		value > static_cast<double>(std::numeric_limits<int>::max()) ||
		std::isnan(value) || std::isinf(value)) 
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void ScalarConverter::printFloat(double value)
{
	std::cout << "float: ";
	if (std::isnan(value))
	{
		std::cout << "nanf" << std::endl;
		return;
	}
	if (std::isinf(value)) 
	{
		if (value < 0)
			std::cout << "-inff" << std::endl;
		else
			std::cout << "+inff" << std::endl;
		return;
	}
	printWithFormat(static_cast<float>(value), true);
}

void ScalarConverter::printDouble(double value)
{
	std::cout << "double: ";
	if (std::isnan(value))
	{
		std::cout << "nan" << std::endl;
		return;
	}
	if (std::isinf(value))
	{
		if (value < 0)
			std::cout << "-inf" << std::endl;
		else
			std::cout << "+inf" << std::endl;
		return;
	}
	printWithFormat(value, false);
}

void ScalarConverter::limits(const std::string& str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nanf" || str == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inff" || str == "+inf")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inff" || str == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverter::convert(const std::string& literal)
{
	double value;
	
	if (!parseLiteral(literal, value))
	{
		limits(literal);
		return;
	}
	printChar(static_cast<int>(value));
	printInt(value);
	printFloat(value);
	printDouble(value);
}
