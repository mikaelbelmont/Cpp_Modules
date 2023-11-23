/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:35 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/23 18:41:01 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"
#include <iomanip>
#include <cstdlib>
#include <string>

struct data
{
	std::string value;
};

class phonebook
{
	private:
		contact contacts[8];
		int size;
		int index;
		struct data data[5];
		void setElement(std::string element, int i);
		void setContact(void);
		void printParams(std::string str);
		void printContent(int index);
		void printHeader(void);
		std::string getInfo(std::string);
		void phonebook::setInfo(std::string info);

	public:
		phonebook(void);
		~phonebook(void);
		void ADD();
		void SEARCH();
		int EXIT();
		
};