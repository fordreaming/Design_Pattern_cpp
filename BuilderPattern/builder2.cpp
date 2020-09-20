#include "builder2.h"

Builder2::Builder2()
{
    m_pProduct = new Product();
}

void Builder2::BuildPartA()
{
    cout << m_pProduct << endl;
    m_pProduct->Add("partX");
}

void Builder2::BuildPartB()
{
    m_pProduct->Add("partY");
}

Product *Builder2::GetResult()
{
    return m_pProduct;
}
