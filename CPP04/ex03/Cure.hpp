#ifndef CURE_HPP
#define CURE_HPP

class Cure {

    public:
        Cure(const Cure& src);
        Cure operator=(const Cure& cpy);
        virtual ~Cure();
    private:
        Cure();
};


#endif
