#include <iostream>

void check_func(int args[]){
  for(auto a : args){
    cout<<a<<endl;  
  }
}

int get_id(int key){
  return key*100+ (int)key%2;
}
