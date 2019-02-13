#include "dict.hh"

#include <vector>

using word = std::string;
using line = std::vector<word>;
using text = std::vector<line>;

class Text
{
public:
    Text(std::string path);
    void load_phoenetics(Dict &dict);
    void dump();
private:
    text content;
};
