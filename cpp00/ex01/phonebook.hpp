/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:35 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:26:36 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contacts.hpp"
#include <iomanip>
#include <cstdlib>

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
		void set_element(std::string element, int i);
		void set_contact(void);
		void print_params(std::string str);
		void print_content(int index);
		void print_header(void);

	public:
		phonebook(void);
		~phonebook(void);
		void ADD();
		void SEARCH();
		int EXIT();
		
};