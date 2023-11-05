class Lizard {
    
private:
    

public:
    Tile* tile; // Pointer to a Tile object
    // Constructor that initializes a Lizard with a Tile
    Lizard(Tile* tl) : tile(tl) {}

    // Default constructor initializing strings to label
    //Lizard() : ("     "), (" ^^@ "),(" + + ") {}

    // Getter for the Tile
    Tile* getTile() const { return tile; }

    // Setter for the Tile
    void setTile(Tile* tl) { tile = tl; }

    // Other member functions for Lizard could go here
};
