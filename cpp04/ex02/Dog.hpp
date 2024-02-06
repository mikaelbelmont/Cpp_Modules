#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain ;

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		virtual void	makeSound()const;
		Dog();
		Dog(const Dog &original);
		Dog &operator=(const Dog &original);
		virtual ~Dog();
};

#endif
