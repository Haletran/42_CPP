#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource {
    public:
        IMateriaSource(const IMateriaSource& src);
        IMateriaSource operator=(const IMateriaSource& cpy);
        virtual ~IMateriaSource();
    private:
        IMateriaSource();
};

#endif
