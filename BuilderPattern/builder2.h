#ifndef BUILDER2_H
#define BUILDER2_H
#include <iostream>
#include "builder.hpp"
#include "product.h"

using namespace std;

class Builder2 : public Builder
{
public:
    Builder2();

    void BuildPartA();
    void BuildPartB();

    Product* GetResult();

public:
    Product*           m_pProduct;
};

#endif // BUILDER2_H
