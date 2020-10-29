#ifndef JSONPARSER_H
#define JSONPARSER_H

#include <map>
#include <string>
#include <any>
#include <fstream>
#include <streambuf>
#include <unordered_set>

namespace JSONParser
{
    //INSTRUCTIONS: Provide parseble string (default) or text file path (isFile must be set true)!
    std::map<std::string, std::any> parse(std::string inputString = "", bool isFile = false);
    //INSTRUCTIONS: Provide parseble stream!
    std::map<std::string, std::any> parse(std::istream &stream);
};

#endif
