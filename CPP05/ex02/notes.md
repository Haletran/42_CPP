## EX02

- Form is now an abstract class AForm
- Create 3 forms that inherit from AForm :
  1. ShrubberyCreationForm : Required grades: sign 145, exec 137
     Create a file <target>\_shrubbery in the working directory, and writes ASCII trees
     inside it.
  2. RobotomyRequestForm : Required grades: sign 72, exec 45
     Makes some drilling noises. Then, informs that <target> has been robotomized
     successfully 50% of the time. Otherwise, informs that the robotomy failed.
  3. PresidentialPardonForm : equired grades: sign 25, exec 5
     Informs that <target> has been pardoned by Zaphod Beeblebrox.

```
All of them take only one parameter in their constructor: the target of the form. For
example, "home" if you want to plant shrubbery at home.
```

- execute(Bureaucrat const & executor) const member function to
  the base form and implement a function to execute the form’s action of the concrete
  classes. You have to check that the form is signed and that the grade of the bureaucrat
  attempting to execute the form is high enough. Otherwise, throw an appropriate excep-
  tion.

-executeForm(AForm const & form) member function to the Bureau-
crat. It must attempt to execute the form. If it’s successful, print something like:
`<bureaucrat> executed <form>`
If not, print an explicit error message.
Implement and turn in some tests to ensure everything works as expected
