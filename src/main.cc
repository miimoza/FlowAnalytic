#include <iostream>
#include <stdexcept>

#include "text.hh"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "usage: ./flow-analytic my_lyrics_file\n";
        exit(0);
    }

    Dict dict("data/cmudict");
    Text lyrics(argv[0]);
    lyrics.load_phoenetics(dict);
    lyrics.dump();

    std::cout << "Ok nice\n";
    return 1;
}
