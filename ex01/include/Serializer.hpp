#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Serializer
{
    public:
        struct Data {
            std::string s1;
            int n;
            std::string s2;
        };

        Serializer();
        ~Serializer();
        Data *deserialize(void *raw);
        void *serialize();
};

#endif