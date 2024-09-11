## Notes for ex03

An ```interface``` is using abstract classes which contains pure virtual functions.<br>
So the class that inherit from the interface, needs to implement those functions.
because if you don't the class is considered ```abstract```.
<br>
<br>
The interface ``does not implement`` his functions, so you don't need to create a ```CPP
file``` for the interface.
<br>

<ins>For example :</ins>
```c++
class Interface {
    public:
        Interface();
        virtual void first_function() = 0;
        virtual void second_function() = 0;
        virtual ~Interface();
};
```
The class that uses those interface as a model, calling the same
functions and declaring those.
They just follow the same model,
but you can still add elements to the class that inherit from the interface.

<ins>For example :</ins>
```c++
// Keeping in mind the Interface created earlier
class Test : public Interface { // It does inherit from the interface
    public:
        Test();
        ~Test();
        // You need to redeclare the functions in the interface
        // So that they are not purely virtual
        void first_function();
        void second_function();
};
```

So in this exercise:
- ```Cure``` and ```Ice``` spell inherit from ```AMateria``` (AMateria is an abstract class).
- ```MateriaSource``` inherit from ```AMateriaSource```.
- Same for ```Character``` class that inherit from ```ICharacter``` (abstract and virtual).


[ TODO ] :

- Remove msg destructor and constructor
- might need to check copy constructor (dont know if it works)
