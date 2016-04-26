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
  Fish(std::string, Fish::Sex);
  ~Fish();
  void action();
  void status();

private:
  std::string _name;
  Fish::Sex   _sex;

private:
  std::string prettify(Fish::Sex);
};

#endif /* __FISH_HPP__ */
