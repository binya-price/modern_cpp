#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void gotta_sort_em_all ()
{
    //vector<string> pokemon = { "Pikachu",
    //                           "Charmander",
    //                           "Squirtle" };
    vector<string> pokemon;
    pokemon.push_back("Pikachu");
    pokemon.push_back("Charmander");
    pokemon.push_back("Squirtle");

    auto srt = [] (const string & l,
                   const string & r)
    {
        return (l.length() < r.length());
    };

    sort(begin(pokemon), end(pokemon), srt);
}