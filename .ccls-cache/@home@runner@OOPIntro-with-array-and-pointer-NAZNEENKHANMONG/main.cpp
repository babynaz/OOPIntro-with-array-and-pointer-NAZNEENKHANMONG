#include <iostream>
#include <iomanip>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int n = (argc - 1) / 3;
  Student* pt_std = new Student[n];
  Student* temp = pt_std;

  for (int i = 0; i < n; i++, temp++) {
    temp->setAll(argv[i * 3 + 1], atoi(argv[i * 3 + 2]), atof(argv[i * 3 + 3]));
  }

  
  temp = pt_std;
  float max_gpa = 0;
  for (int i = 0; i < n; i++, temp++) {
    if (max_gpa < temp->getGPA()) {
      max_gpa = temp->getGPA();
    }
  }

  temp = pt_std;
  for (int i = 0; i < n; i++, temp++) {
    if (temp->getGPA() == max_gpa) {
      temp->printAll();
    }
  }

  delete[] pt_std;
  return 0;
}