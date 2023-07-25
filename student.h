#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int age;
  float score;


public:
  void setAll(string, int, float = 0);
  void printAll();

  void setAge(int);
  int getAge() { return age; }

  float getGPA();

  void setName(string);
};

void Student::setAll(string n, int a, float s) {
  name = n;
  age = a;
  score = s;
}

void Student::printAll() {
  cout << "---Name: " << name << "---" << endl;
  cout << "Age: " << age << endl;
  cout << "Score: " << score << endl;
}

void Student::setAge(int x) {
  if (x > 100 || x < 1)
    cout << "Incorrect age";
  else
    age = x;
}

float Student::getGPA() {
  return score;
}

void Student::setName(string n) {
  name = n;
  age = 0;
  score = 0;
}

#endif