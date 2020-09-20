#ifndef BUILDER_H
#define BUILDER_H
class Product;

class Builder
{
public:
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual Product* GetResult() = 0;
};

#endif // BUILDER_H
