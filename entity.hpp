#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <boost/noncopyable.hpp>

class Entity : public boost::noncopyable {
public:
  virtual void action() = 0;
};

#endif /* __ENTITY_HPP__ */
