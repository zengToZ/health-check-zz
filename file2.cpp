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
  if (id > 100) return valid;
  else if (id > 0) return invalid;
  else return unknown;
}

int get_id(int key){
  if (key > 10000) return -1;
  else if (key < 10) return -1;
  return key*100+ (int)key%3;
}
