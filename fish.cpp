#include <iostream>
#include "fish.hpp"

Fish::Fish(std::string name, Fish::Sex sex) :
  _name{name},
  _sex{sex} {
}

Fish::~Fish() {
}

void Fish::action() {
}

void Fish::status() {
  std::cout << "Nom: " << _name << std::endl;
  std::cout << "Sexe: " << prettify(_sex) << std::endl;
}

std::string Fish::prettify(Fish::Sex sex) {
  switch (sex) {
    case Fish::Male:
      return "male";
    case Fish::Female:
      return "female";
  }
}
