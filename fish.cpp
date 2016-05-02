#include <iostream>
#include <array>
#include "fish.hpp"

Fish::Fish() : Fish("undefined", Male){}

Fish::Fish(std::string name, Fish::Sex sex) :
  m_name{name},
  m_sex{sex} {
    if(m_sex >= Fish::MAX_SEX) {
      throw(UndefinedSex());
    }
}

void Fish::action() {
}

void Fish::status() {
  std::cout << "====Fish====" << std::endl;
  std::cout << "Nom: " << m_name << std::endl;
  std::cout << "Sexe: " << sex() << std::endl;
  std::cout << "Specie: " << species() << std::endl;
}

const std::string &Fish::sex() {
  static std::array<std::string, Fish::MAX_SEX> const names {
    "male",
    "female"
  };
  return names.at(m_sex);
}

const std::string &Fish::species() {
  static std::array<std::string, Fish::MAX_SPECIES> const species {
    "Grouper",
    "Tunny",
    "Clownfish",
    "Flounder",
    "Bar",
    "Carp",
  };
  return species.at(m_species);
}

Entity::Kind Fish::kind() {
  return Entity::Fish;
}
