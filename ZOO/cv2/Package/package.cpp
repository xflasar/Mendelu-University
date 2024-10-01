#include "package.hpp"

Package::Package(const std::string& source, const std::string& destination, float price, float weight, bool insured) {
  this->m_source = source;
  this->m_destination = destination;
  this->m_price = price;
  this->m_weight = weight;
  this->m_insured = insured;
}

Package::Package(const std::string& source, const std::string& destination) : Package(source, destination, 0.0, 0.0, false) {
  this->m_price = 0;
  this->m_weight = 0;
}

Package::Package(const std::string& source, const std::string& destination, float weight) : Package(source, destination, 0.0, weight, false) {
  this->m_weight = weight;
}

Package::~Package() {
  std::cout << "Destroyed Package!" << std::endl;
}

void Package::setPrice(float value) {
  this->m_price = value;
}

void Package::setWeight(float value) {
  if (value < 0) {
    std::cerr << "Cannot set negative weight!" << std::endl;
    this->m_weight = 0;
  } else {
    this->m_weight = value;
  }
}

float Package::getPrice() {
  return this->m_price;
}

float Package::getWeight() {
  return this->m_weight;
}

void Package::printPackage() {
  std::cout << "Package source: " << m_source << std::endl;
  std::cout << "Package destination: " << m_destination << std::endl;
  std::cout << "Package price: " << m_price << std::endl;
  std::cout << "Package weight: " << m_weight << std::endl;
  std::cout << "Package insured: " << m_insured << std::endl;
}