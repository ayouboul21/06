/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:14:47 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/13 21:09:43 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.setNum(22);
    data.setFloatNum(3.14);
    data.setString("This is the chosen string");

    uintptr_t raw = Serializer::serialize(&data);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "num: " << ptr->getNum() << std::endl;
    std::cout << "float: " << ptr->getFloatNum() << std::endl;
    std::cout << "string: " << ptr->getString() << std::endl;

    return 0;
}
