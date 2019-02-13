#include <iostream>
#include <sstream>
#include <string>

#include "text.hh"

Text::Text(std::string path)
{
    std::ifstream input;
    input.open(path);

    std::string line;
    while (getline(input, line))
    {
        std::stringstream line_stream(line);
        word w;
        std::vector<word> l;
        while (line_stream >> w)
            l.push_back(w);
        content.push_back(l);
    }

    std::cout << "text loaded\n";
}

void Text::load_phoenetics(Dict &dict)
{
    std::cout << " phoenetics\n";
}

void Text::dump()
{
    for (auto l : content)
    {
        for (auto w : l)
            std::cout << w << " ";
        std::cout << "\n";
    }
    std::cout << "dump cool\n";
}
