#include <string>
#include "token.h" 

bool isWhitespace(char c);

bool isLetter(char c);

bool isDigit(char c);

bool isAlphanumeric(char c);

void lexer(std::string code);