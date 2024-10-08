#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class AForm;
#include <exception>
#include <iostream>

class Bureaucrat {
private:
  std::string const _name;
  int _grade;
  Bureaucrat();

public:
  // FUNCTIONS
  std::string getName() const;
  int getGrade() const;
  void decrement_grade(int value);
  void increment_grade(int value);
  void SignedForm(AForm &check);
  Bureaucrat executeForm(AForm const & form);

  // COPLIAN
  Bureaucrat(const std::string _name, int grade);
  Bureaucrat(const Bureaucrat &cpy);
  Bureaucrat &operator=(const Bureaucrat &src);
  ~Bureaucrat();

  // CUSTOM EXCEPTIONS
  class GradeTooHighException : public std::exception {
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);

#endif
