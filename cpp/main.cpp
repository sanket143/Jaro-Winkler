#include<iostream>
#include "jwdistance.h"

using namespace std;

int main(){
  float weight = jw_distance("seveloper", "developer");
  cout << weight << endl; 
  return 0;  
}
