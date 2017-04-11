#ifndef AEQUAITO_VECTOR_HPP
#define AEQUAITO_VECTOR_HPP
#include <string>
#include <vector>
#include "../class_headers.hpp"
namespace aequatio {
  class Vector : public Base {
   public:
    Vector();
    Vector(int n);
    Vector(std::vector<Symbol> elements);
    ~Vector();
    void Append(Symbol element);
    int Type();
    std::string String();
    std::vector<Symbol> vec_terms;
    int length;

   private:
  };

  Vector operator+(Vector& a, Vector& b);
  Vector operator-(Vector& a, Vector& b);
  Vector operator*(Vector& a, Vector& b);
  Vector operator/(Vector& a, Vector& b);
  Vector operator+(Vector& a, Symbol& b);
  Vector operator-(Vector& a, Symbol& b);
  Vector operator*(Vector& a, Symbol& b);
  Vector operator/(Vector& a, Symbol& b);
}
#endif
