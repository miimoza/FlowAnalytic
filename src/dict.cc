#include "dict.hh"

#include <sstream>
#include <string>

Dict::Dict(std::ifstream is)
{
    load(is);
}

Dict::Dict(std::string path)
{
    std::ifstream is;
    is.open(path);
    load(is);
}

phonetic Dict::get_phonetic(std::string word)
{
    return wm[word];
}

void Dict::load(std::ifstream is)
{
    std::string str;
    while (getline(is, str))
    {
        std::stringstream s(str);
        std::string word;
        std::string tmp;
        s >> word;
        while (s >> tmp)
        {
            wm[word].push_back(tmp);
        }
    }
}
