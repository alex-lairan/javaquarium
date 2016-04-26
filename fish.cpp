#include <iostream>
#include "fish.hpp"

Fish::Fish(std::string name, Fish::Sex sex) :
  _name{name},
  _sex{sex} {
}

void Fish::action() {
}

void Fish::status() {
  std::cout << "Nom: " << _name << std::endl;
  std::cout << "Sexe: " << prettify(_sex) << std::endl;
}

std::string Fish::prettify(const Fish::Sex& sex) {
  switch (sex) {
    case Fish::Male:
      return "male";
    case Fish::Female:
      return "female";
    default:
      return "undefined";
  }
}
