#include <iostream>
#include "WWF/usage.hpp"

void ShowUsage() {

    std::cout << "Usage: \n"
              << "Options:\n"
              << "\t-h          Show this help message and exit\n"
              << "\t-b          Rack contains 1 blank character\n"
              << "\t-B          Rack contains 2 blank characters\n"
              << "\t-e <chars>  Extend the rack with the following characters\n"
              << "\t-g <chars>  Create words using these characters as a group\n"
              << "\t-l <int>    Display results with as many letters as specified\n"
              << "\t-r <chars>  Rack of characters to combine into words\n"
              << "\t-s <regex>  Search the dictionary for the provided string or regex\n"
              << "\t-x <regex>  Filter results matching the provided regex\n"
              << "\n";

              return;
} // show_usage()