
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