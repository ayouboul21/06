/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:40:40 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/13 20:45:46 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
}

Data::Data(Data const & src)
{
    *this = src;
}

Data & Data::operator=(Data const & src)
{
    (void)src;
    return *this;
}

Data::~Data()
{
}

int			Data::getNum() const
{
    return this->num;
}

float		Data::getFloatNum() const
{
    return this->float_num;
}

std::string	Data::getString() const
{
    return this->string;
}

void		Data::setNum(int num)
{
    this->num = num;
}

void		Data::setFloatNum(float float_num)
{
    this->float_num = float_num;
}

void		Data::setString(std::string string)
{
    this->string = string;
}
