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
  if (key > 5000) return -1;
  else if (key < 5) return -1;
  return key*100+ (int)key%3;
}

void* test_out(int& i){
  int j = get_id(i);
}
