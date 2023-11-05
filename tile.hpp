#include <string>

class Tile {

private:
    // std::string tile_top;
    // std::string tile_mid;
    // std::string tile_bot;

    // int xPos;
    // int yPos;

public:

    std::string tile_top;
    std::string tile_mid;
    std::string tile_bot;

    int xPos;
    int yPos;

    // Constructor
    Tile(const std::string& s1, const std::string& s2, const std::string& s3)
        : tile_top(s1), tile_mid(s2), tile_bot(s3) {}

    // Default constructor initializing strings to label
    Tile() : tile_top(" top "), tile_mid(" mid "), tile_bot(" bot ") {}

    // Set position of tile
    void setPos( int x, int y){
        xPos = x;
        yPos = y;
    } 

};