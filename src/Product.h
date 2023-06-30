#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>

class Product
{
  int cost;
  std::string name;
  Product() = default;
};

typedef std::list<Product> spec_cell;
typedef std::vector<spec_cell> bag;
