int main() {
    // don't do this, it's stupid
    /*int King {1};
    int Queen {2};
    int Rook {3};
    int Pawn {4};
    int myPeace {King};*/
    // rather, do it this way using enums :
    enum class PieceType { King, Queen, Rook, Pawn };
    // now :
    PieceType piece { PieceType::King };
    // basically, PieceTypes start with 0 and go upwards.
}
