#include<iostream>
#include "Package/package.hpp"
#include "Package/package.cpp"

int main() {
  Package* package1 = new Package("test1", "test2");
  Package* package2 = new Package("T2", "T3", 16.5);

  package2->printPackage();

  package1->printPackage();
  package1->setPrice(15);
  package1->setWeight(4);
  package1->printPackage();

  delete package1;
  delete package2;
  
  return 0;
}