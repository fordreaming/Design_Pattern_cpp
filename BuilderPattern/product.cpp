#include "product.h"

Product::Product()
{

}

void Product::Add(std::string part)
{
    m_parts.push_back(part);
}

void Product::Show()
{
    cout << "build product" << endl;
    for(int i = 0; i < m_parts.size(); i++) {
        cout << "part: " << m_parts[i] << endl;
    }
}
