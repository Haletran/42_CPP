#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
private:
  std::string const _name;
  bool _is_signed;
  static const int _grade_s = 15;
  static const int _grade_e = 5;
  Form();

public:
  // COPLIAN
  // Form(std::string const &name);
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
  class AlreadySigned : public std::exception {
    const char *what() const throw();
  };
  void beSigned(Bureaucrat *bur);

  // GETTERS / SETTERS
  int getGradeS() const;
  int getGradeE() const;
  bool getSigned() const;
  std::string getName() const;
};

std::ostream &operator<<(std::ostream &os, Form &bur);

#endif
