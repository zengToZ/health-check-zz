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

int get_id(int key){
  return key*100+ (int)key%2;
}
