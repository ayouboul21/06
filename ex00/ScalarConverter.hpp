/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:13:32 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/12 19:39:49 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter & operator=(ScalarConverter const & src);
		~ScalarConverter();
	public:
		static void convert(std::string str);
};

#endif
