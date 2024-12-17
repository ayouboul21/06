/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:13:11 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/14 11:04:03 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    (void)src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
    (void)src;
    return *this;
}

void ScalarConverter::convert(std::string str)
{
	char		c;
	double		num;
	std::string rest_str;

	try
	{
		if (str.length() != 1)
		{
			char	*rest;
			num = std::strtod(str.c_str(), &rest);
			rest_str = rest;
			if (rest_str.length() == 0 && str != "inf")
				num = std::stod(str);
			else if (((rest_str.length() > 1 || (rest_str != "f"))
				|| str == "inf" || str == "inff"
				|| (rest_str == "f" && !(std::strchr(str.c_str(), '.'))))
				&& (str != "-inff" && str != "+inff" && str != "nanf"))
				throw std::invalid_argument("Invalid input");
		}
		else
			num = std::stod(str);
		c = static_cast<char>(num);
		if (num > std::numeric_limits<char>::max() || num < std::numeric_limits<char>::min())
			std::cout << "char: impossible" << std::endl;
		else
		{
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		if (num - static_cast<double>(num) == 0)
		{
			if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
				std::cout << "int: impossible" << std::endl;
			else
				std::cout << "int: " << static_cast<int>(num) << std::endl;
		}
		else
			std::cout << "int: impossible" << std::endl;
		if (num - static_cast<int>(num) == 0)
			std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		if (num - static_cast<int>(num) == 0)
			std::cout << "double: " << num << ".0" << std::endl;
		else
			std::cout << "double: " << num << std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		if (str.length() == 1)
		{
			c = str[0];
			std::cout << "char: '" << c << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
	catch(const std::out_of_range& e)
	{
		if (str[0] == '-')
			c = '-';
		else
			c = '\0';
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << c << "inff" << std::endl;
		std::cout << "double: " << c << "inf" << std::endl;
	}
}
