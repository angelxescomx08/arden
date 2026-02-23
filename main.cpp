#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string readFile(string &path){
  ifstream file(path);

  if(!file){
    throw runtime_error("Failed to open file: " + path);
  }

  stringstream buffer;

  buffer << file.rdbuf();

  return buffer.str();
}

int main(){

  string path = "code_test.ar";
  string code = readFile(path);
  cout << code << endl;

  return 0;
}