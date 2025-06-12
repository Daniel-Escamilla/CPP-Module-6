/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:59:08 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/12 13:00:32 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

class Data
{
	private:
    	int value;
	public:
		Data() {};
		~Data() {};
		Data(const Data& copy);
		Data& operator=(const Data& copy);

		int getValue();
		void setValue(int newValue);
};

#endif