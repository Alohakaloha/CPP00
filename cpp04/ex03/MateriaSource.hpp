#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &obj);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const &obj);

		
		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);
	private:
		AMateria	*_source[4];
};


#endif