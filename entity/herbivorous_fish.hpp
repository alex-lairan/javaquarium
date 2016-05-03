#ifndef __HERBIVOROUS_FISH_HPP__
#define __HERBIVOROUS_FISH_HPP__

#include "fish.hpp"

class HerbivorousFish : public Fish {
public:
  HerbivorousFish(std::string, Fish::Sex, Fish::Species);

  Fish::Feeding feeding();
};

#endif /* __HERBIVOROUS_FISH_HPP__ */
