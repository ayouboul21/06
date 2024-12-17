/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:33:02 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/13 21:40:17 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return 0;
}
