#ifndef SCHOOLGIRL_HPP
#define SCHOOLGIRL_HPP

#include <string>

class SchoolGirl
{
public:
    SchoolGirl(std::string name);
    std::string GetName();
private:
    std::string m_name;
};


SchoolGirl::SchoolGirl(std::string name)
{
    m_name = name;
}

std::string SchoolGirl::GetName()
{
    return m_name;
}
#endif // SCHOOLGIRL_HPP