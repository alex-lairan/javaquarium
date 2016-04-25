#ifndef __FISH_HPP__
#define __FISH_HPP__

#include <string>
#include "entity.hpp"

class Fish : public Entity {
public:
  enum Sex {
    Male,
    Female
  };
public:
  Fish(std::string name);
  ~Fish();
  void action();

private:
  std::string _name;
  Fish::Sex   _sex;
};

#endif /* __FISH_HPP__ */
