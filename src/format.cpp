#include <string>

#include "format.h"

using namespace std;

string Format::AddPadding(string str, char ch, size_t len) {
    str.insert(str.begin(), len - str.size(), ch);
    return str;
}
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long int times) {
    int hours = times / 3600;
    int minutes = (times % 3600) / 60;
    int seconds = (times % 3600) % 60;
    return string(Format::AddPadding(to_string(hours), '0', 2) + ":" + 
                  Format::AddPadding(to_string(minutes), '0', 2) + ":" +
                  Format::AddPadding(to_string(seconds), '0', 2)); 
}