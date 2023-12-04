# include<iostream>
# include<cmath>// Needed for the pow function
using namespace std;

class Character
{
protected:
    static const int EXP_LV = 100;
    string name;
    int level;
    int exp;
    int power;
    int knowledge; 
    int luck;
    void levelUP(int pInc, int kInc, int lInc);
public:

    Character(string n, int lv, int po, int kn, int lu);
    void print();
    void beatMonster(int exp);
    string getName();
};


Character::Character(string n, int lv, int po, int kn, int lu) 
: name(n), level(lv), exp(pow(lv - 1, 2) * EXP_LV), power(po), knowledge(kn), luck(lu)
{
}

void Character::print()
{
    cout << this->name <<": level" << this->level 
    << "(" << this->exp << "/" << pow(this->level, 2)* EXP_LV << "),"
    << this->power << "-" << this->knowledge << "-" << this->luck << "\n";
}

string Character::getName()
{
    return this->name;
}

void Character::beatMonster(int exp)
{
    this->exp += exp;
    while(this->exp >= pow(this->level, 2) * EXP_LV)
        this->levelUP(0, 0, 0);
}

void Character::levelUP(int pInc, int kInc, int lInc)
{
    this->level++;
    this->power += pInc;
    this->knowledge += kInc;
    this->luck +=lInc;
}

class Warrior : public Character
{
private:
    static const int PO_LV = 10;
    static const int KN_LV = 5;
    static const int LU_LV = 5;
public:
    Warrior(string n, int lv = 1):Character(n, lv, lv * PO_LV, lv * KN_LV, lv * LU_LV)
    {
    }

    void print()
    { 
    cout << "Warrior" ; 
    Character::print();
    }

    void beatMonster(int exp)
    {
        this->exp += exp;
        while(this->exp >= pow(this-> level, 2) * EXP_LV)
            this->levelUP(PO_LV, KN_LV, LU_LV);
    }

};

class Wizard : public Character
{
private:
    static const int PO_LV = 4;
    static const int KN_LV = 9;
    static const int LU_LV = 7;
public:
    Wizard(string n, int lv = 1):Character(n, lv, lv * PO_LV, lv * KN_LV, lv * LU_LV)
    {
    }

    void print()
    { 
    cout << "Wizard" ; 
    Character::print();
    }

    void beatMonster(int exp)
    {
        this->exp += exp;
        while(this->exp >= pow(this-> level, 2) * EXP_LV)
            this->levelUP(PO_LV, KN_LV, LU_LV);
    }

class Team
{
private:
    int warriorCount;
    int wizardCount;
    Warrior* warrior[10];
    Wizard* wizard[10];
public:
    Team();
    ~Team();


};
int main()
{
    cout << "run" << endl;
}