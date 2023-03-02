#include <iostream>
#include <string>
#include <vector>
// stringStream
#include <sstream>
// ostream_iterator
#include <iterator>
// round
#include <cmath>
// setw align
#include <iomanip>

using namespace std;

double round_to(double value, double precision = 1.0)
{
    return std::round(value / precision) * precision;
}

int main()
{
  std::string inputStr;
  int x;
  double y;
  char c[100];

  /* 1 */
  cout << "Enter one integer: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream(inputStr);
  inputStream >> x;
  cout << "You entered the number: " << x << endl;

  /* 2 */
  std::cout << "Enter four integers: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_fourint(inputStr);
  inputStream_fourint >> x;
  std::cout << "You entered the number: " << x;
  inputStream_fourint >> x;
  std::cout << " " << x;
  inputStream_fourint >> x;
  std::cout << " " << x;
  inputStream_fourint >> x;
  std::cout << " " << x <<endl;

  /* 3 */
  cout << "Enter one integer and one real number: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_intandreal(inputStr);
  inputStream_intandreal >> x;
  inputStream_intandreal >> y;
  std::cout.width(10);
  std::cout << "The real is: " << std::right << std::setw(11)  << round_to(y, 0.001) << endl;
  std::cout.width(10);
  std::cout << "The integer is: " << std::right << std::setw(8)  << x << endl;

  /* 4 */
  cout << "Enter one real and one integer number: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_realandint(inputStr);
  inputStream_realandint >> y;
  inputStream_realandint >> x;
  std::cout.width(10);
  std::cout << "The real is: " << std::right << std::setw(11) << std::setfill('.') << round_to(y, 0.001) << endl;
  std::cout.width(10);
  std::cout << "The integer is: " << std::right << std::setw(8) << std::setfill('.') << x << endl;

  /* 5 */
  cout << "Enter an character: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_c(inputStr);
  inputStream_c >> c;
  std::cout << "You entered: " << c << endl;

  /* 6 */
  cout << "Enter a word: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_word(inputStr);
  inputStream_word >> c;
  std::cout << "The word '" << c << "' has " << strlen(c) << " character(s)." << endl;

  /* 7 */
  cout << "Enter a integer and a word: " << endl;
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_intandchar(inputStr);
  inputStream_intandchar >> x;
  inputStream_intandchar >> c;
  std::cout << "You entered: '" << x << "' and '" << c << "'." << endl;

  /* 8 */
  cout << "Enter an character and a word: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_charandword(inputStr);
  inputStream_charandword >> c;
  inputStream_charandword >> inputStr;
  std::cout << "You entered the string \"" << inputStr << "\" and the character '" << c << "'." << endl;

  /* 9 */
  cout << "Enter a word and real number: ";
  std::getline(std::cin, inputStr);
  std::istringstream inputStream_wordandreal(inputStr);
  inputStream_wordandreal >> c;
  inputStream_wordandreal >> y;
  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  std::cout << "You entered the \"" << c << "\" and \"" << y << "\"." << endl;

  /* 10 */
  cout << "Enter a text-line: ";
  std::getline(std::cin, inputStr);
  std::cout << "You entered \"" << inputStr << "\"" << endl;

  /* 11 */
  cout << "Enter a second line of text: ";
  std::getline(std::cin, inputStr);
  std::cout << "You entered \"" << inputStr << "\"" << endl;

  /* 12 */
  cout << "Enter three words: ";
  std::getline(std::cin, inputStr);
  std::cout << "You entered '" << inputStr << "'" << endl;

  return 0;
}