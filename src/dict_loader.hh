#include <map>
#include <vector>

using phonetic = std::vector<std::string>;
using words_map = std::map<std::string, phonetic>;

class Dict {
public:
    Dict (std::string path);
    phonetic get_phonetic(std::string word);
private:
    words_map wm;
};
