#ifndef __CARNIVOROUS_FISH_HPP__
#define __CARNIVOROUS_FISH_HPP__

#include "fish.hpp"

class CarnivorousFish : public Fish {
public:
  CarnivorousFish(std::string, Fish::Sex, Fish::Species);
  CarnivorousFish(std::string, Fish::Sex) = delete;

  Fish::Feeding feeding();
};

#endif /* __CARNIVOROUS_FISH_HPP__ */
