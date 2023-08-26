// Copyright Vladimir Prus 2002-2004.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/program_options.hpp>
#include "ingest_options.hpp"

using namespace boost;
namespace po = boost::program_options;

#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


// A helper function to simplify the main part.
template<class T>
ostream& operator<<(ostream& os, const vector<T>& v)
{
    copy(v.begin(), v.end(), ostream_iterator<T>(os, " "));
    return os;
}

int Ingest_Options(int ac, char* av[]) {
//int main(int ac, char* av[])

    po::options_description desc("Allowed options");
    try {
//        po::options_description desc("Allowed options");
        desc.add_options()
            ("help,h", "Print this help message and exit")
            ("blank,b", "Rack contains 1 blank char")
            ("blank2,B", "Rack contains 2 blank chars")
            ("extend <chars>,e", "Extend the rack with the following chars")
            ("group <chars>,g", "create words with this group of chars")
            ("length <int>,l", "Display words at least this long")
            ("rack <chars>,r", "Rack of chars to combine into words")
            ("search <regex>,s", "Search disctionary for <regex>")
/*
            ("optimization", po::value<int>(&opt)->default_value(10),
                  "optimization level")
            ("augment-dict", po::value< vector<string> >(), "filename of added words")
            ("subtract-dict", po::value< vector<string> >(), "filename of removed words")
*/
        ;

        po::positional_options_description q;
        q.add("augment-dict", -1);

        po::variables_map vm;

        po::store(po::command_line_parser(ac, av).
                  options(desc).positional(q).run(), vm);
        po::notify(vm);

        if (vm.count("help")) {
            cout << "Usage: program [options]\n";
            cout << desc;
            return 0;
        }

        if (vm.count("augment-dict"))
        {
            cout << "Valid words not in WWF dictionary: "
                 << vm["augment-dict"].as< vector<string> >() << "\n";
        }

        if (vm.count("subtract-dict"))
        {
            cout << "Disallowed words in WWF dictionary: "
                 << vm["subtract-dict"].as< vector<string> >() << "\n";
        }

    }
    catch(std::exception& e)
    {
        cout << e.what() << "\n";
        return 1;
    }

    if ( ac < 3 ) {
        cout << "Usage: program [options]\n";
        cout << desc;
    }

    return 0;
}
