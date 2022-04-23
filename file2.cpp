#include <iostream>
#include <vector>

enum Stats {valid, invalid, unknown};

void check_func(int args[]){
  std::vector<int> v;
  for(auto a : args){
    v.push_back(a);
    // to print
    cout<<a<<endl;  
  }
}

Stats valid_id(int id){
  if (id > 1000) return valid;
  else if (id > 0) return invalid;
  else return unknown;
}

int get_id(int key){
  return key*1000+ (int)key%3;
}
