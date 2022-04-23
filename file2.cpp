#include <iostream>
#include <vector>

void check_func(int args[]){
  std::vector<int> v;
  for(auto a : args){
    v.push_back(a);
    // to print
    cout<<a<<endl;  
  }
}

bool valid_id(int id){
  return id > 1000;
}

int get_id(int key){
  return key*1000+ (int)key%3;
}
