#include <vector>
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

bool isOperator(char c){
  return OPERATORS.find(std::string(1, c)) != OPERATORS.end();
}

std::string getWord(std::string code, int &position){
  std::string word = "";
  while(position < code.length() && isAlphanumeric(code[position])){
    word += code[position];
    position++;
  }
  return word;
}

std::string getNumber(std::string code, int &position){
  std::string number = "";
  while(position < code.length() && isDigit(code[position])){
    number += code[position];
    position++;
  }
  return number;
}

std::string getOperator(std::string code, int &position){
  std::string operator_string = "";
  while(position < code.length() && (isOperator(code[position]) || code[position] == '!')){
    operator_string += code[position];
    position++;
  }
  return operator_string;
}

std::vector<Token> lexer(std::string code){
  std::vector<Token> tokens;
  int position = 0;
  while(position < code.length()){
    char currentChar = code[position];

    if(isWhitespace(currentChar)){
      position++;
      continue;
    }

    if(isLetter(currentChar)){
      std::string word = getWord(code, position);

      // Check if it is in the keywords map
      if(KEYWORDS.find(word) != KEYWORDS.end()){
        tokens.emplace_back(KEYWORDS.at(word), word);
      } else{
        tokens.emplace_back(TokenType::IDENTIFIER_TOKEN, word);
      }
    }else if(isDigit(currentChar)){
      std::string number = getNumber(code, position);
      if(number.find('.') != std::string::npos){
        tokens.emplace_back(TokenType::FLOAT_TOKEN, number);
      } else{
        tokens.emplace_back(TokenType::INTEGER_TOKEN, number);
      }
    }else if(isOperator(currentChar)){
      std::string operator_string = getOperator(code, position);
      if(OPERATORS.find(operator_string) != OPERATORS.end()){
        tokens.emplace_back(
          OPERATORS.at(operator_string), 
          operator_string
        );
      }
    }else if(
      PUNCTUATION_MARKS.find(std::string(1, currentChar)) != PUNCTUATION_MARKS.end()
    ){
      tokens.emplace_back(
        PUNCTUATION_MARKS.at(std::string(1, currentChar)), std::string(1, currentChar)
      );
      position++;
    }else{
      tokens.emplace_back(
        TokenType::UNKNOWN_TOKEN, 
        std::string(1, currentChar)
      );
      position++;
    }
  }

  return tokens;
}