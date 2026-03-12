#include <iostream>
#include <fstream>
#include <sstream>

#include "src/lexer/lexer.h"

std::string readFile(std::string &path){
  std::ifstream file(path);

  if(!file){
    throw std::runtime_error("Failed to open file: " + path);
  }

  std::stringstream buffer;

  buffer << file.rdbuf();

  return buffer.str();
}

int main(){

  std::string path = "code_test.ar";
  std::string code = readFile(path);
  
  lexer(code);

  return 0;
}