#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form {
private:
  std::string const _name;
  bool _is_signed;
  int const _grade_s = 15;
  int const _grade_e = 5;
  Form();

public:
  // COPLIAN
  Form(std::string const &name);
  Form(const Form &cpy);
  Form operator=(const Form &src);
  virtual ~Form();

  // FUNCTIONS
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
  void beSigned(Bureaucrat *bur);

  // GETTERS / SETTERS
  int getGradeS();
  int getGradeE();
  bool getSigned();
  std::string getName();
};

std::ostream &operator<<(std::ostream &os, Form &bur);

#endif
