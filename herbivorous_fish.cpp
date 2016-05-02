#include <iostream>
#include "herbivorous_fish.hpp"

HerbivorousFish::HerbivorousFish(std::string name , Fish::Sex sex,
                                 Fish::Species species) :
  Fish(name, sex) {
    m_species = species;
}


Fish::Feeding HerbivorousFish::feeding() {
  return Fish::Herbivorous;
}
