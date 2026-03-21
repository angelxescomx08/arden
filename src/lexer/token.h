#include <string>
#include <unordered_map>
#include <iostream>

enum class TokenType {
  IDENTIFIER_TOKEN,

  NULL_TOKEN,
  STRING_TOKEN,
  INTEGER_TOKEN,
  BOOLEAN_TOKEN,
  CHAR_TOKEN,
  FLOAT_TOKEN,
  DOUBLE_TOKEN,
  LONG_TOKEN,
  SHORT_TOKEN,
  BYTE_TOKEN,

  CONST_TOKEN,

  IF_TOKEN,
  ELSE_TOKEN,
  ELSE_IF_TOKEN,
  FOR_TOKEN,
  WHILE_TOKEN,
  DO_TOKEN,
  SWITCH_TOKEN,
  CASE_TOKEN,
  DEFAULT_TOKEN,
  RETURN_TOKEN,

  CLASS_TOKEN,
  EXTENDS_TOKEN,

  BREAK_TOKEN,
  CONTINUE_TOKEN,

  ADD_TOKEN,
  SUBTRACT_TOKEN,
  MULTIPLY_TOKEN,
  DIVIDE_TOKEN,
  EQUAL_TOKEN,
  NOT_EQUAL_TOKEN,
  GREATER_THAN_TOKEN,
  LESS_THAN_TOKEN,
  GREATER_THAN_EQUAL_TOKEN,
  LESS_THAN_EQUAL_TOKEN,
  MODULO_TOKEN,

  ASSIGN_TOKEN,

  LEFT_PAREN_TOKEN,
  RIGHT_PAREN_TOKEN,
  LEFT_BRACE_TOKEN,
  RIGHT_BRACE_TOKEN,
  LEFT_BRACKET_TOKEN,
  RIGHT_BRACKET_TOKEN,
  SEMICOLON_TOKEN,
  COMMA_TOKEN,

  UNKNOWN_TOKEN,
};

class Token {
  public:
    TokenType type;
    std::string value;

    Token(TokenType type, std::string value){
      this->type = type;
      this->value = value;
    }
};

const std::unordered_map<std::string, TokenType> KEYWORDS = {
  {"null", TokenType::NULL_TOKEN},
  {"string", TokenType::STRING_TOKEN},
  {"int", TokenType::INTEGER_TOKEN},
  {"boolean", TokenType::BOOLEAN_TOKEN},
  {"char", TokenType::CHAR_TOKEN},
  {"float", TokenType::FLOAT_TOKEN},
  {"double", TokenType::DOUBLE_TOKEN},
  {"long", TokenType::LONG_TOKEN},
  {"short", TokenType::SHORT_TOKEN},
  {"byte", TokenType::BYTE_TOKEN},

  {"const", TokenType::CONST_TOKEN},

  {"if", TokenType::IF_TOKEN},
  {"else", TokenType::ELSE_TOKEN},
  {"for", TokenType::FOR_TOKEN},
  {"while", TokenType::WHILE_TOKEN},
  {"do", TokenType::DO_TOKEN},
  {"switch", TokenType::SWITCH_TOKEN},
  {"case", TokenType::CASE_TOKEN},
  {"default", TokenType::DEFAULT_TOKEN},
  {"return", TokenType::RETURN_TOKEN},

  {"class", TokenType::CLASS_TOKEN},
  {"extends", TokenType::EXTENDS_TOKEN},

  {"break", TokenType::BREAK_TOKEN},
  {"continue", TokenType::CONTINUE_TOKEN},
};

const std::unordered_map<std::string, TokenType> OPERATORS = {
  {"+", TokenType::ADD_TOKEN},
  {"-", TokenType::SUBTRACT_TOKEN},
  {"*", TokenType::MULTIPLY_TOKEN},
  {"/", TokenType::DIVIDE_TOKEN},
  {"==", TokenType::EQUAL_TOKEN},
  {"!=", TokenType::NOT_EQUAL_TOKEN},
  {">", TokenType::GREATER_THAN_TOKEN},
  {"<", TokenType::LESS_THAN_TOKEN},
  {">=", TokenType::GREATER_THAN_EQUAL_TOKEN},
  {"<=", TokenType::LESS_THAN_EQUAL_TOKEN},
  {"%", TokenType::MODULO_TOKEN},
  {"=", TokenType::ASSIGN_TOKEN},
};

const std::unordered_map<std::string, TokenType> PUNCTUATION_MARKS = {
  {"(", TokenType::LEFT_PAREN_TOKEN},
  {")", TokenType::RIGHT_PAREN_TOKEN},
  {"{", TokenType::LEFT_BRACE_TOKEN},
  {"}", TokenType::RIGHT_BRACE_TOKEN},
  {"[", TokenType::LEFT_BRACKET_TOKEN},
  {"]", TokenType::RIGHT_BRACKET_TOKEN},
  {";", TokenType::SEMICOLON_TOKEN},
  {",", TokenType::COMMA_TOKEN},
};

inline std::ostream& operator<<(std::ostream& os, TokenType type) {
  switch (type) {
      case TokenType::IDENTIFIER_TOKEN: return os << "IDENTIFIER_TOKEN";

      case TokenType::NULL_TOKEN: return os << "NULL_TOKEN";
      case TokenType::STRING_TOKEN: return os << "STRING_TOKEN";
      case TokenType::INTEGER_TOKEN: return os << "INTEGER_TOKEN";
      case TokenType::BOOLEAN_TOKEN: return os << "BOOLEAN_TOKEN";
      case TokenType::CHAR_TOKEN: return os << "CHAR_TOKEN";
      case TokenType::FLOAT_TOKEN: return os << "FLOAT_TOKEN";
      case TokenType::DOUBLE_TOKEN: return os << "DOUBLE_TOKEN";
      case TokenType::LONG_TOKEN: return os << "LONG_TOKEN";
      case TokenType::SHORT_TOKEN: return os << "SHORT_TOKEN";
      case TokenType::BYTE_TOKEN: return os << "BYTE_TOKEN";

      case TokenType::CONST_TOKEN: return os << "CONST_TOKEN";

      case TokenType::IF_TOKEN: return os << "IF_TOKEN";
      case TokenType::ELSE_TOKEN: return os << "ELSE_TOKEN";
      case TokenType::ELSE_IF_TOKEN: return os << "ELSE_IF_TOKEN";
      case TokenType::FOR_TOKEN: return os << "FOR_TOKEN";
      case TokenType::WHILE_TOKEN: return os << "WHILE_TOKEN";
      case TokenType::DO_TOKEN: return os << "DO_TOKEN";
      case TokenType::SWITCH_TOKEN: return os << "SWITCH_TOKEN";
      case TokenType::CASE_TOKEN: return os << "CASE_TOKEN";
      case TokenType::DEFAULT_TOKEN: return os << "DEFAULT_TOKEN";
      case TokenType::RETURN_TOKEN: return os << "RETURN_TOKEN";

      case TokenType::CLASS_TOKEN: return os << "CLASS_TOKEN";
      case TokenType::EXTENDS_TOKEN: return os << "EXTENDS_TOKEN";

      case TokenType::BREAK_TOKEN: return os << "BREAK_TOKEN";
      case TokenType::CONTINUE_TOKEN: return os << "CONTINUE_TOKEN";

      case TokenType::ADD_TOKEN: return os << "ADD_TOKEN";
      case TokenType::SUBTRACT_TOKEN: return os << "SUBTRACT_TOKEN";
      case TokenType::MULTIPLY_TOKEN: return os << "MULTIPLY_TOKEN";
      case TokenType::DIVIDE_TOKEN: return os << "DIVIDE_TOKEN";
      case TokenType::EQUAL_TOKEN: return os << "EQUAL_TOKEN";
      case TokenType::NOT_EQUAL_TOKEN: return os << "NOT_EQUAL_TOKEN";
      case TokenType::GREATER_THAN_TOKEN: return os << "GREATER_THAN_TOKEN";
      case TokenType::LESS_THAN_TOKEN: return os << "LESS_THAN_TOKEN";
      case TokenType::GREATER_THAN_EQUAL_TOKEN: return os << "GREATER_THAN_EQUAL_TOKEN";
      case TokenType::LESS_THAN_EQUAL_TOKEN: return os << "LESS_THAN_EQUAL_TOKEN";
      case TokenType::MODULO_TOKEN: return os << "MODULO_TOKEN";

      case TokenType::ASSIGN_TOKEN: return os << "ASSIGN_TOKEN";

      case TokenType::LEFT_PAREN_TOKEN: return os << "LEFT_PAREN_TOKEN";
      case TokenType::RIGHT_PAREN_TOKEN: return os << "RIGHT_PAREN_TOKEN";
      case TokenType::LEFT_BRACE_TOKEN: return os << "LEFT_BRACE_TOKEN";
      case TokenType::RIGHT_BRACE_TOKEN: return os << "RIGHT_BRACE_TOKEN";
      case TokenType::LEFT_BRACKET_TOKEN: return os << "LEFT_BRACKET_TOKEN";
      case TokenType::RIGHT_BRACKET_TOKEN: return os << "RIGHT_BRACKET_TOKEN";
      case TokenType::SEMICOLON_TOKEN: return os << "SEMICOLON_TOKEN";
      case TokenType::COMMA_TOKEN: return os << "COMMA_TOKEN";

      case TokenType::UNKNOWN_TOKEN: return os << "UNKNOWN_TOKEN";
      
      default: return os << "UNKNOWN_TOKEN";
  }
}