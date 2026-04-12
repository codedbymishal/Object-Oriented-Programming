#include <iostream>
using namespace std;

// Base class
class Weapons {
public:
    void WeaponsDescription() {
        cout << "Weapons: General category of arms used in defense." << endl;
    }
};

// Derived class: HotWeapons
class HotWeapons : public Weapons {
public:
    void HotWeaponsDescription() {
        cout << "Hot Weapons: Uses gunpowder or other explosive materials." << endl;
    }
};

// Derived class: Bombs
class Bombs : public HotWeapons {
public:
    void BombsDescription() {
        cout << "Bombs: Explosive devices that blow up on impact or timer." << endl;
    }
};

// Derived class: NuclearBombs
class NuclearBombs : public Bombs {
public:
    void NuclearBombsDescription() {
        cout << "Nuclear Bombs: Explode using nuclear fission and fusion." << endl;
    }
};

int main() {
    // create objects for each class
    Weapons w;
    HotWeapons hw;
    Bombs b;
    NuclearBombs nb;

    // call description methods
    cout << "---- Weapons Hierarchy ----" << endl;

    w.WeaponsDescription();
    hw.HotWeaponsDescription();
    b.BombsDescription();
    nb.NuclearBombsDescription();

    return 0;
}
