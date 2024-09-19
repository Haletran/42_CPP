#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
private:
  std::string const _name;
  bool _is_signed;
  const int _grade_s;
  const int _grade_e;
public:
  // COPLIAN
  AForm(std::string const &name, int grade_s, int grade_e);
  AForm(const AForm &cpy);
  // AForm operator=(const AForm &src);
  virtual ~AForm();

  // FUNCTIONS
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
  class AlreadySigned : public std::exception {
    const char *what() const throw();
  };
  void beSigned(Bureaucrat *bur);
  virtual void execute(Bureaucrat const &executor) const = 0;

  // GETTERS / SETTERS
  int getGradeS() const;
  int getGradeE() const;
  bool getSigned() const;
  std::string getName() const;
};

std::ostream &operator<<(std::ostream &os, AForm &bur);

#endif
