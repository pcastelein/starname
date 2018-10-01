#include <string>
#include "utilities.h"
#include "utilities.h"

std::string lower_all_case(std::string data) {
   for (int i=0; i<data.length(); i++){
      data[i] = tolower(data[i]);
   }
   return data;
}

std::string make_first_upper(std::string data) {
      data[0] = toupper(data[0]);
   return data;
}
