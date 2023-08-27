#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


int main()
{
    {
        // IMateriaSource* src = new MateriaSource();
        // src->learnMateria(new Ice());
        // src->learnMateria(new Cure());
        // ICharacter* me = new Character("me");
        // AMateria* tmp;
        // tmp = src->createMateria("ice");
        // me->equip(tmp);
        // tmp = src->createMateria("cure");
        // me->equip(tmp);
        // ICharacter* bob = new Character("bob");
        // me->use(0, *bob);
        // me->use(1, *bob);
        // delete bob;
        // delete me;
        // delete src;
    }
    {
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        Character* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        Character* bob = new Character("bob");
        AMateria *save =  me->Tosave(0);
        me->unequip(0);
        delete save;
        save =  me->Tosave(1);
        me->unequip(1);
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        delete save;
        return 0;
    }
}
