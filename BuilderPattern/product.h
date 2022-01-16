#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product
{
public:
    Product();
    void Add(std::string part);
    void Show();

public:
    vector<string>          m_parts;
};

#endif // PRODUCT_H
