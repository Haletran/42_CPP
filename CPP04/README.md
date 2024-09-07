## Notes for ex03

An ```interface``` is using abstract classes which contains pure virtual functions.
For example :
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

For example :
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

So in this exercise, ```Cure``` and ```Ice``` spell inherit from ```AMateria``` that himself inherit from the interface ```IMateriaSource```.
Same for ```Character``` class that inherit from ```ICharacter```
