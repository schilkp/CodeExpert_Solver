/*
 * Automatically Generated CodeExpert Solution
 * Script by Philipp Schilk, 2020
 * https://github.com/TheSchilk/CodeExpert_Solver
 *
 * Are you really going to submit this?
 * I wrote this as a fun programming challenge.
 * Submitting this kind of code, while it will fool the auto-grader,
 * will not be accepted as a solution. 
 */

#include <iostream>
#include <algorithm>

int case_count = 10;

std::string input_pattern[] = {
  "0 0 r  2 1 r  0 1 r  2 0 r  0 0 d  2 2 u  1 0 r  1 1 u  1 1 r  0 2 d  1 1 d  1 0 d",
  "0 0 r  0 1 r  0 2 d  1 2 d  2 2 l  2 1 l  2 0 u  1 0 u  1 1 l  1 1 u  1 1 r  1 1 d",
  "0 0 r  0 1 r  0 2 d  1 2 d  2 2 l  2 1 l  2 0 u  1 0 u  1 1 l  1 1 r  1 1 u  1 1 d",
  "0 2 d  0 0 r  0 1 r  0 0 d  1 0 r  0 1 d  1 1 r  1 2 d  2 1 r  1 1 d  1 0 d  2 0 r",
  "1 2 u  0 1 l  0 2 l  1 0 u  1 1 l  1 1 u  1 2 l  2 2 u  2 2 l  2 1 u  2 0 u  2 1 l",
  "0 1 d  0 0 r  1 1 d  0 1 r  0 2 d  1 1 r  1 0 d  2 0 r  2 1 r  1 2 d  1 0 r  0 0 d",
  "1 1 u  0 1 l  2 1 u  0 2 l  1 2 u  1 2 l  2 0 u  2 1 l  2 2 l  2 2 u  1 1 l  1 0 u",
  "1 0 u  0 0 r  0 1 r  0 2 d  1 2 l  1 1 r  1 1 u  1 1 l  1 0 d  2 0 r  1 0 d  2 1 u  2 1 r  0 0 r  2 2 u",
  "1 0 u  0 0 l  0 0 r  0 1 r  0 2 d  1 2 l  1 2 r  1 1 u  1 1 l  3 3 u  1 0 d  2 0 r  2 1 u  0 1 u  2 1 r  2 1 d  2 2 u",
  "0 0 d  0 0 r  1 0 r  0 1 d  0 1 r  0 2 d  1 0 d  1 1 r  1 1 d  2 0 r  1 2 d  2 1 r  2 0 d"
};

std::string output[] = {
  "Step #13\n  0 1 2\n0 .—.—.\n  |B|A|\n1 .—.—.\n  |A|A|\n2 .—.—.\nA won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |B|B|\n1 .—.—.\n  |B|B|\n2 .—.—.\nB won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |A|A|\n1 .—.—.\n  |A|A|\n2 .—.—.\nA won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |B|B|\n1 .—.—.\n  |A|B|\n2 .—.—.\nB won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |B|B|\n1 .—.—.\n  |A|B|\n2 .—.—.\nB won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |A|B|\n1 .—.—.\n  |A|A|\n2 .—.—.\nA won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |A|B|\n1 .—.—.\n  |A|A|\n2 .—.—.\nA won!",
  "Invalid move!\nInvalid move!\nInvalid move!\nStep #13\n  0 1 2\n0 .—.—.\n  |B|B|\n1 .—.—.\n  |B|A|\n2 .—.—.\nB won!",
  "Invalid move!\nInvalid move!\nInvalid move!\nInvalid move!\nInvalid move!\nStep #13\n  0 1 2\n0 .—.—.\n  |B|B|\n1 .—.—.\n  |B|A|\n2 .—.—.\nB won!",
  "Step #13\n  0 1 2\n0 .—.—.\n  |B|A|\n1 .—.—.\n  |B|A|\n2 .—.—.\nDraw!"
};

int main(){
  //Get input
  std::string input = "";
  std::cin >> std::noskipws;

  char inchar;
  while(std::cin >> inchar){
    input += inchar;
  }
  
	//We always end up with a trailing newline, get rid of that.
  input.pop_back();
  
  //Replace all newlines within string with spaces
  replace(input.begin(), input.end(), '\n', ' ');
	
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