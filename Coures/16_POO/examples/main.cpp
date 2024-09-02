#include <iostream>

using std::string;

class Person
{
protected:
    string Name;
    int age;

public:
    Person(string name, int age) : Name(name), age(age) {}
    virtual void IntroduiceSelf()
    {
        std::cout << "Name :" << Name << std::endl;
        std::cout << "age :" << age << std::endl;
    }

    string getName()
    {
        return this->Name;
    }
    void setName(string name)
    {
        this->Name = name;
    }
};

class Employee : public Person
{

private:
    string Company;

public:
    Employee(string name, string cp, int age) : Person(name, age), Company(cp) {}

    void IntroduiceSelf() override
    {
        Person::IntroduiceSelf();
        std::cout << "Company :" << Company << std::endl;
    }
};

int main()
{

    Employee e1 = Employee("sidi", "YT", 26);
    (e1).IntroduiceSelf();

    Employee *ptrE2 = new Employee("ahmed", "YT", 30);
    ptrE2->IntroduiceSelf();

    Employee e3("sidi", "YTT", 28);
    e3.IntroduiceSelf();

    return 0;
}
