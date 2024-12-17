/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoulahra <aoulahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:35:30 by aoulahra          #+#    #+#             */
/*   Updated: 2024/12/13 20:45:21 by aoulahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

class Data
{
	private:
		int			num;
		float		float_num;
		std::string	string;
    public:
		Data();
		Data(Data const & src);
		Data & operator=(Data const & src);
		~Data();
		int			getNum() const;
		float		getFloatNum() const;
		std::string	getString() const;
		void		setNum(int num);
		void		setFloatNum(float float_num);
		void		setString(std::string string);
};

#endif