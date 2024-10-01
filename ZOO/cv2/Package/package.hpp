#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package {
  private:
    std::string m_source;
    std::string m_destination;
    float m_price;
    float m_weight;
    bool m_insured;

  public:
    // Constructor with correct parameter types
    Package(const std::string& source, const std::string& destination, float price, float weight, bool insured);
    Package(const std::string& source, const std::string& destination); // : Package(source, destination, 0.0, 0.0, false) {}
    Package(const std::string& source, const std::string& destination, float weight); // : Package(source, destination, 0.0, weight, false) {}

    // Destructor should not take parameters
    ~Package();

    void setPrice(float value);
    float getPrice();

    void setWeight(float value);
    float getWeight();

    void printPackage();
};

#endif // PACKAGE_H
