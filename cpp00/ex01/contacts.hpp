/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarreto <mbarreto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:26:13 by mbarreto          #+#    #+#             */
/*   Updated: 2023/11/24 16:47:42 by mbarreto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		contact();
		~contact();
		void setFirstName(std::string change_name);
		std::string getFirstName(void);
		void setLastName(std::string change_last_name);
		std::string getLastName(void);
		void setNickName(std::string change_nick_name);
		std::string getNickName(void);
		void setPhoneNumber(std::string change_phone_number);
		std::string getPhoneNumber(void);
		void setDarkestSecret(std::string change_darkest_secret);
		std::string getDarkestSecret(void);
};
