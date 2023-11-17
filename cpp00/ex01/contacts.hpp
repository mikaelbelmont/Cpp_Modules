/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:13 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/15 15:26:14 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		contact();
		~contact();
		void set_first_name(std::string change_name);
		std::string get_first_name(void);
		void set_last_name(std::string change_last_name);
		std::string get_last_name(void);
		void set_nick_name(std::string change_nick_name);
		std::string get_nick_name(void);
		void set_phone_number(std::string change_phone_number);
		std::string get_phone_number(void);
		void set_darkest_secret(std::string change_darkest_secret);
		std::string get_darkest_secret(void);
};
