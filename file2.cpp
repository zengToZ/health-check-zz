#include <iostream>
#include <vector>

void check_func(int args[]){
  std::vector<int> v;
  for(auto a : args){
    v.push_back(a);
    cout<<a<<endl;  
  }
}
