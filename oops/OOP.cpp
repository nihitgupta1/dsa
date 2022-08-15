#include <iostream>
using std::string;

// ABSTRACTION
class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
};

// ENCAPSULATION
class Employee : AbstractEmployee
{
private:
  string Company;
  int Age;

protected:
  string Name;

public:
  void setName(string name)
  {
    Name = name;
  }
  string getName()
  {
    return Name;
  }
  void setCompany(string company)
  {
    Company = company;
  }
  string getCompany()
  {
    return Company;
  }
  void setAge(int age)
  {
    if (age >= 18)
      Age = age;
  }
  int getAge()
  {
    return Age;
  }

  void IntroduceYourself()
  {
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Company - " << Company << std::endl;
    std::cout << "Age - " << Age << std::endl;
  }

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void AskForPromotion()
  {
    if (Age > 30)
      std::cout << Name << " got promoted!" << std::endl;
    else
      std::cout << Name << ", sorry no promotion for you" << std::endl;
  }

  //POLYMORPHISM
  virtual void Work()
  {
    std::cout << Name << " is performing tasks." << std::endl;
  }
};

// INHERITANCE
class Developer : public Employee
{
public:
  string FavProgrammingLanguage;
  Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
  {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  void FixBug()
  {
    std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
  }

  void Work()
  {
    std::cout << Name << " is writing code in " << FavProgrammingLanguage << std::endl;
  }
};

class Teacher : public Employee
{
public:
  string Subject;
  void PrepareLesson()
  {
    std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
  }

  Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
  {
    Subject = subject;
  }

  void Work()
  {
    std::cout << Name << " is teaching " << Subject << std::endl;
  }
};

int main()
{
  // Employee employee1 = Employee("Nihit", "Dream", 21);
  // Employee employee2 = Employee("Stardust", "Facebook", 31);

  Developer d = Developer("Nihit", "Google", 21, "C++");
  // d.FixBug();
  // d.AskForPromotion();

  Teacher t = Teacher("Jack", "Amazon", 32, "Physics");
  // t.PrepareLesson();
  // t.AskForPromotion();

  Employee *e1 = &d;
  Employee *e2 = &t;

  e1->Work();
  e2->Work();
}