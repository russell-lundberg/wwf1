#include <iostream>
#include <algorithm>
#include <iterator>
#include "WWF/usage.hpp"
#include "ingest_options.hpp"


int main(int argc, char *argv[])
{
    /* code */

    std::copy(argv, 
        argv + argc, 
        std::ostream_iterator<char *>(std::cout, "\n")
    );

    // warn if not enough options entered
    /*
    if (argc < 3) {
        std::cout << "WWF: Insufficient paramaters\n";
        ShowUsage();
        exit(0);
    }
    */

    Ingest_Options(argc, argv);


    return 0;
}

