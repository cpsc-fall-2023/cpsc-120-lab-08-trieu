// Trieu Nguyen
// Trieu.Nguyen@csu.fullerton.edu
// @TrieuNguyen225
//
// My Program

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  bool first = true;
  for (std::string& arg : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(arg);
  }

  double average{sum / (static_cast<int>(arguments.size()) - 1)};

  std::cout << "average = " << average;
  return 0;
}
