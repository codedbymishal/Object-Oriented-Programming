#include <iostream>
using namespace std;
class Character{
	private:
		int* health;
		int* attackPower;
		int* defense;
		
	public:
		Character() //default constructor
		{
			health=new int (100);
			attackPower= new int (500);
			defense= new int (100);
		}
		Character(int h,int a, int d) //parametrized constructor
		{
			health = new int (h);
			attackPower= new int(a);
			defense= new int(d);
		}
		Character(const Character& obj) //copy constructor(deep)
		{
			health = new int (*obj.health);
			attackPower= new int(*obj.attackPower);
			defense= new int(*obj.defense);
		}
		~Character() //destructor
		{
            delete health;
            delete attackPower;
            delete defense;
        }
        // getters
        int gethealth() const 
		{ 
		   return *health;
	    }
        int getattackPower() const 
		{ 
		   return *attackPower; 
		}
        int getdefense() const 
		{ 
		   return *defense; 
		}

        // setters
        void sethealth(int h) 
		{ 
		   *health = h; 
		}
        void setattackPower(int ap) 
		{ 
		   *attackPower = ap; 
		}
        void setdefense(int def) 
		{ 
		   *defense = def; 
		}

        void display() const // display function
		{
            cout << "Health: " << *health  << ", Attack: " << *attackPower<< ", Defense: " << *defense << endl;
        }
    
};
int main()
{

    Character c1;
    cout << "Character 1 (default): ";
    c1.display();

    
    Character c2(100, 50, 20);
    cout << "Character 2 (custom): ";
    c2.display();

    
    Character c3 = c2;
    cout << "Character 3 (copy of character 2): ";
    c3.display();

    // Modify copy to show deep copy
    c3.sethealth(200);
    cout << "\nAfter modifying copied character:" << endl;
    cout << "Character 2: ";
    c2.display();
    cout << "Character 3: ";
    c3.display();
    
    return 0;
}
