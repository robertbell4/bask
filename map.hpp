#include <string>
#include <iostream>

class Map {

private:
    // static const int map_width = 3;
    // static const int map_height = 3;

    // Tile tiles[map_height][map_width];

public:

    static const int map_width = 20;
    static const int map_height = 5;

    Tile tiles[map_height][map_width];
    //constructor
    Map() {
        // Initialize each tile in the map
        for (int y = 0; y < map_height; ++y) {
            for (int x = 0; x < map_width; ++x) {
                tiles[y][x] = Tile();
                tiles[y][x].setPos(x, y); // If you need position inside the tile
            }
        }
    }

    void printMap(){
        for (int i = 0; i <  map_height; i++)
        {
                std::string top_line = "Top: ";
                std::string mid_line = "Mid: ";
                std::string bot_line = "Bot: ";

            for (int j = 0; j < map_width; j++)
            {
                top_line = top_line + (tiles[i][j]).tile_top;
                mid_line = mid_line + (tiles[i][j]).tile_mid;
                bot_line = bot_line + (tiles[i][j]).tile_bot;
            }
            std::cout << top_line + "\n";
            std::cout << mid_line + "\n";
            std::cout << bot_line + "\n";
        }
        
    }


};