#include <iostream>
#include <array>
#include "fish.hpp"

Fish::Fish(std::string name, Fish::Sex sex) :
  m_name{name},
  m_sex{sex} {
    if(m_sex >= Fish::MAX) {
      throw(UndefinedSex());
    }
}

void Fish::action() {
}

void Fish::status() {
  std::cout << "Nom: " << m_name << std::endl;

  std::cout << "Sexe: " << sex() << std::endl;
}

const std::string &Fish::sex() {
  static std::array<std::string, Fish::MAX> const names {
    "male",
    "female"
  };
  return names.at(m_sex);
}

Entity::Kind Fish::kind() {
  return Entity::Fish;
}
