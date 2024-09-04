#ifndef ICE_HPP
#define ICE_HPP

class Ice {
    public:
        Ice(const Ice& src);
        Ice operator=(const Ice& cpy);
        virtual ~Ice();
    private:
        Ice();
};

#endif
