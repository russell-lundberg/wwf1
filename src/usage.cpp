#include <iostream>
#include "WWF/usage.hpp"

void ShowUsage() {

    std::cout << "Usage: \n"
              << "Options:\n"
              << "\t-h,--help\tShow this help message\n"
              << "\t-b,\thand contains a blank character\n"
              << "\t-B,\thand contains 1 blank characters\n"
              << "\t-d,\tSearch the dictionary for the provided string or regex\n"
              << "\t-e,\tadd the next character to the hand\n"
              << "\t-l,\tdisplay results with as many letters as specified\n"
              << "\t-x,\tdisplay results filtered by the provided regex\n"
              << "\n";

              return;
} // show_usage()