#include <string>
#include <vector>
#include "token.h" 

bool isWhitespace(char c);

bool isLetter(char c);

bool isDigit(char c);

bool isAlphanumeric(char c);

std::string getWord(std::string code, int &position);

std::string getNumber(std::string code, int &position);

bool isOperator(char c);

std::string getOperator(std::string code, int &position);

std::vector<Token> lexer(std::string code);