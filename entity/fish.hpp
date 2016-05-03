#ifndef __FISH_HPP__
#define __FISH_HPP__

#include <string>
#include "entity.hpp"

class Fish : public Entity {
public:
  class UndefinedSex : private std::exception{};
  class UndefinedSpecies : private std::exception{};
public:
  enum Sex {
    Male,
    Female,
    MAX_SEX
  };

  enum Feeding {
    Carnivorous,
    Herbivorous,
    MAX_FEEDING
  };

  enum Species {
    Grouper,
    Tunny,
    Clownfish,
    Flounder,
    Bar,
    Carp,
    MAX_SPECIES
  };
public:
  Fish();
  Fish(std::string, Fish::Sex);

  void               action();
  void               status();
  Entity::Kind       kind();
  const std::string &sex();
  const std::string &species();

  virtual Fish::Feeding feeding() = 0;

protected:
  std::string   m_name;
  Fish::Sex     m_sex;
  Fish::Species m_species;
};

#endif /* __FISH_HPP__ */
