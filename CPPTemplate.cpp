#### THIS TEMPLATE WILL NOT COMPILE UNTIL POPULATED BY ETHCodeExpert_Solver.py ! ####
/*
 * Automatically Generated CodeExpert Solution
 * Script by Philipp Schilk, 2020
 * https://github.com/TheSchilk/ETHCodeExpert_Solver
 *
 * Are you really going to submit this?
 * I wrote this as a fun programming challenge.
 * Submitting this kind of code, while it will fool the auto-grader,
 * will not be accepted as a solution. 
 */

#include <iostream>
#include <string.h>
using namespace std;

int case_count = $COUNT$;

string input_pattern[] = {
$INPUTS$
};

string output[] = {
$OUTPUTS$
};

int main(){
  //Get input
  string input;
  getline(cin, input);
  
  //Lookup and output
  for(int i = 0; i < case_count; i++){
    if(input_pattern[i] == input){
      std::cout << output[i] << std::endl;  
      return 0;
    }
  }
  
  //No input matched?
  std::cout << "No pattern matched!?" << std::endl;
  std::cout << "Seems like you might have to bust out your coding chops after all! :(" << std::endl;
  return -1;
}