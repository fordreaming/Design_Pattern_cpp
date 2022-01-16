#ifndef BUILDER1_H
#define BUILDER1_H

#include "builder.hpp"
#include "product.h"

class Builder1 : public Builder
{
public:
    Builder1();

    void BuildPartA();
    void BuildPartB();

    Product* GetResult();

public:
    Product*           m_pProduct;

};

#endif // BUILDER1_H
