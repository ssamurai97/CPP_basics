#include<algorithm>
#include<iostream>
#include<list>



int main(){
  std::list planets{"Venus", "Mars", "Jupiter", "Saturn", "Uranus"};

  // insert Mecury a the beginning 
  planets.push_front("Mecury");

  // Insert Neptune at the end
  planets.push_back("Netptune");

  // Insert Earth befor Mars
  auto pos = std::find(std::begin(planets), std::end(planets), "Mars");

  planets.insert(pos, "Earth");


  std::cout<<" List of planets: \n ";

  for(const auto& name : planets){

	  std::cout<<' '<< name;
  }

  std::cout<<'\n';

  return 0;

}
