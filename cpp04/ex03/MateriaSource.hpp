#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *store[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &);
        MateriaSource &operator=(const MateriaSource &);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

        ~MateriaSource();
};





#endif