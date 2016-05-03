#include "carnivorous_fish.hpp"

CarnivorousFish::CarnivorousFish(std::string name , Fish::Sex sex,
                                 Fish::Species species) :
  Fish(name, sex) {
  m_species = species;
}

Fish::Feeding CarnivorousFish::feeding() {
  return Fish::Carnivorous;
}
