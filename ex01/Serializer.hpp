/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:56:05 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/13 20:42:49 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstring>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const & src);
		~Serializer();
		Serializer & operator=(Serializer const & src);
	public:
		static Data			*deserialize(uintptr_t raw);
		static uintptr_t	serialize(Data* ptr);
};

#endif
