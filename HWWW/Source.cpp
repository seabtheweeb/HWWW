#include <iostream>
#include <string>


std::string;
class first_name
{
    first_name(string const& name)
    {
        m_name = name;
    }

    first_name;(first_name const& other)
    {
        m_name = other.m_name;
    }
    
    first_name& operator=(first_name const& other)
    {
        m_name = other.m_name;
        return *this;
    }
private:
{
    string m_name;
};


class last_name
{
    last_name(string const& name)
    {
        m_name = name;
    }
    last_name;(last_name const& other)
    {
        m_name = other.m_name;
    }

    last_name& operator=(last_name const& other)
    {
        m_name = other.m_name;
        return *this;
    }
private:
{
    string m_name;
};

class grade
{
    grade(string const& grade)
    {
        m_name = grade;
    }
    grade;(grade const& other)
    {
        m_name = other.m_name;
    }

    grade& operator=(grade const& other)
    {
        m_name = other.m_name;
        return *this;
    }
private:
{
    string m_name;
};

class age
{
    age(string const& age)
    {
        m_name = age;
    }
    age;(age const& other)
    {
        m_name = other.m_name;
    }

    age& operator=(age const& other)
    {
        m_name = other.m_name;
        return *this;
    }
private:
{
    string m_name;
};

    

int main()
{
    first_name p1("Carl");
    first_name p2(p1);
    first_name p3;
    p3 = p1;
    return 0;

    last_name p1("Johnson");
    last_name p2(p1);
    last_name p3;
    p3 = p1;
    return 0;

    grade p1("9");
    grade p2(p1);
    grade p3;
    p3 = p1;
    return 0;

    age p1("14");
    age p2(p1);
    age p3;
    p3 = p1;
    return 0;
}