#include "lexer.h"

bool isWhitespace(char c){
  return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

bool isLetter(char c){
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c){
  return c >= '0' && c <= '9';
}

bool isAlphanumeric(char c){
  return isLetter(c) || isDigit(c);
}

void lexer(std::string code){
  int position = 0;
  while(position < code.length()){

  }
}