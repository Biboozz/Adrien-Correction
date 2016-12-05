#include <tuple>  //  Lib wich include tuple classes
#include <vector> //  Lib for vector classes
#include <fstream>
#include <iostream>
#include <string>

#define DATA_PATH_ "data/volumes_d_eau_distribues.txt"

int main()
{
  std::ifstream file;
  try
  {
    file.open(DATA_PATH_);
  }
  catch (const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }

  //I create a vector containing couples (tuples) which contain a string for
  //the month and an unsigned for the amount of water used.
  std::vector<std::tuple<std::string, unsigned>> months;

  while(file.good())
  {
    std::string token;
    file >> token;
    std::string amount;
    file >> amount;
    if (file.good())
    {
      months.push_back(std::make_tuple(token, std::stoul(amount)));
    }
  }

  long unsigned total  = 0;
  for(auto i : months) //Loop on all object in vector.
  {
    total += std::get<1>(i); //Acces to the 2nd element of i tuple.
  }
  std::cout << "Paris used " << total / months.size()
            << " l of water in average during the year 2011" << std::endl;
}
