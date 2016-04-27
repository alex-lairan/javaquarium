#include <iostream>
#include "fish.hpp"

Fish::Fish(std::string name, Fish::Sex sex) :
  m_name{name},
  m_sex{sex} {
}

void Fish::action() {
}

void Fish::status() {
  std::cout << "Nom: " << m_name << std::endl;
  std::string sex;
  try {
    sex = prettify(m_sex);
  }
  catch(UndefinedSex e) {
    sex = "undefined";
  }
  std::cout << "Sexe: " << sex << std::endl;
}

std::string Fish::prettify(Fish::Sex sex) throw(UndefinedSex) {
  switch (sex) {
    case Fish::Male:
      return "male";
    case Fish::Female:
      return "female";
  }
  throw UndefinedSex();
}

Entity::Kind Fish::kind() {
  return Entity::Fish;
}
