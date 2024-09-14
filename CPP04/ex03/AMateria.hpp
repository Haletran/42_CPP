#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Colors.hpp"
#include <iostream>

#include "ICharacter.hpp"

class AMateria {
protected:
  std::string type;
  AMateria();
  bool already_taken;

public:
  // FUNCTIONS
  std::string const &getType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
  void set_bool();
  bool get_bool();

  // COPLIAN
  AMateria(std::string const &type);
  AMateria(AMateria const &src);
  AMateria &operator=(const AMateria &cpy);
  virtual ~AMateria();
};

#endif
