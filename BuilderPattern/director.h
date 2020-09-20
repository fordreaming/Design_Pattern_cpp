#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <builder.hpp>

class Director
{
public:
    Director();

public:
    void Construct(Builder* builder);
};

#endif // DIRECTOR_H
