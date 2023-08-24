#include <iostream>
#include "inputted_options.hpp"

void NotImplemented(char *argument) {
    // just a placeholder function
    return;
}

/*
void InputtedOptions(int argc, char *argv[]) {

    std::string extension;
    for (int i = 1; i < argc; ++i) {
        if ((&argv[i] == "-h") || (&argv[i] == "--help")) {
            NotImplemented(argv[i]);
        } else if ((argv[i] == "-e") || (argv[i] == "--extension")) {
            NotImplemented(argv[i]);
//            if (i + 1 < argc) { // Make sure we aren't at the end of argv!
//                // Increment 'i' so we don't get the argument as the next argv[i].
//                extension = argv[i];
//            } else { // Uh-oh, there was no argument to the destination option.
//                std::cerr << "--extension option requires a string argument.\n";
//                return 1;
//            }
        } else if ((argv[i] == "-x") || (argv[i] == "--regex")) {
            NotImplemented(argv[i]);
        } else if ((argv[i] == "-b") || (argv[i] == "--blank")) {
            NotImplemented(argv[i]);
        } else if ((argv[i] == "-B") || (argv[i] == "--double")) {
            NotImplemented(argv[i]);
        } else if ((argv[i] == "-d") || (argv[i] == "--dictionary")) {
            // -d <regex> arg, to search dictionary for the inputted regex
            NotImplemented(argv[i]);
//            get_dictionary();
        } else if ((argv[i] == "-l") || (argv[i] == "--length")) {
            // -l 
//            not_implemented(arg);
        } else {
            // placeholder
        }
    }

    return;
}
*/