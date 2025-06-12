/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:44:56 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 11:22:27 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

bool	ScalarConverter::isValidNumericLiteral(const std::string& str)
{
	bool hasPoint = false;
	size_t i = 0;

	if (str.empty())
		return false;
	if (str[i] == '+' || str[i] == '-')
		++i;
	for (; i < str.length(); ++i)
	{
		char c = str[i];

		if (std::isdigit(c))
			continue;
		else if (c == '.')
		{
			if (hasPoint)
				return false;
			hasPoint = true;
		}
		else
			return false;
	}
	return true;
}

bool ScalarConverter::parseLiteral(const std::string& str, double& out)
{
	if (str.length() > 1 && str[str.length() - 1] == 'f' && str.find('.') != std::string::npos)
	{
		std::string floatPart = str.substr(0, str.length() - 1);
        std::istringstream floatStream(floatPart);
		float f_number;
		
		floatStream >> f_number;
		if (!floatStream.fail() && floatStream.eof()) {
            out = static_cast<double>(f_number);
            return true;
        }
	}
	else if (isValidNumericLiteral(str))
	{
		std::istringstream iss(str);
		iss >> out;
		return !iss.fail() && iss.eof();
	}
	return false;
}

bool ScalarConverter::hasDecimalPart(double value)
{
	double intPart;
	return std::modf(value, &intPart) != 0.0;
}

int ScalarConverter::getDecimalPrecision(const std::string& str)
{
    size_t dotPos = str.find('.');
    if (dotPos == std::string::npos)
        return 1;

    size_t end = str.find('f');
    if (end == std::string::npos)
        end = str.length();

    return static_cast<int>(end - dotPos - 1);
}

void ScalarConverter::printWithFormat(double value, bool isFloat, const std::string& originalStr)
{
    std::cout << std::fixed;
    int precision = getDecimalPrecision(originalStr);
    std::cout << std::setprecision(precision);
    std::cout << value;
    if (isFloat)
        std::cout << "f";
    std::cout << std::endl;
}