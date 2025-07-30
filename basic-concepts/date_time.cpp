#include <iostream>
#include <ctime>  // Import the ctime library


int main() {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);

  char output[50];

  std::strftime(output, 50, "%I:%M:%S %p", &datetime);
  std::cout << output << "\n";

  std::strftime(output, 50, "%m/%d/%y", &datetime);
  std::cout << output << "\n";

  return 0;
}
