#include <iostream>
#include <string>
#include "utilities.h"
#include "utilities.h"

using namespace std;

int main(int argc, char *argv[]) {
   string first_name = "";
   string last_name = "";
   string maiden_name = "";
   string birth_town = "";

   string star_first = "";
   string star_last = "";

   cout << "Star Wars Name Generator\n";

   cout << "First Name: ";
   cin >> first_name;
   cout << "Last Name: ";
   cin >> last_name;
   cout << "Maiden Name: ";
   cin >> maiden_name;
   cout << "Birth Town: ";
   cin >> birth_town;

   star_first = make_first_upper(lower_all_case(last_name.substr(0,3) + first_name.substr(0,2)));
   star_last = make_first_upper(lower_all_case(maiden_name.substr(0,2) + birth_town.substr(0,3)));

   cout << star_first << " " << star_last << endl;

   return 0;
}

#include "utilities.h"
