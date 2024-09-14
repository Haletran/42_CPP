#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define DROPPING_LIMIT 100

class Character : public ICharacter {
private:
  AMateria *_inventory[4];
  std::string _name;

public:
  // FUNCTIONS
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);
  std::string const &getName() const;
  AMateria *ground[DROPPING_LIMIT];
  void add_to_ground(AMateria *m);
  void get_ground();
  void get_inventory();

  // COPLIAN
  Character(std::string const &name);
  Character(const Character &src);
  Character &operator=(const Character &cpy);
  virtual ~Character();
};

#endif
