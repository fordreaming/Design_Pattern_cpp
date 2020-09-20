#include "builder1.h"

Builder1::Builder1()
{
    m_pProduct = new Product();
}

void Builder1::BuildPartA()
{
    cout << m_pProduct << endl;
    m_pProduct->Add("partA");
}

void Builder1::BuildPartB()
{
    m_pProduct->Add("partB");
}


Product* Builder1::GetResult()
{
    return m_pProduct;
}
