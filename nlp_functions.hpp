#include <vector>

void display_misses(int misses);
void end_game(std::string answer, std::string codeword);
void greet();
void display_status(std::vector<char> incorrect, std::string answer, std::string codeword, int misses);