# include<iostream>

int i = 5;
int main()
{
    for(; i< 20;i++)
        std::cout << i << " ";
    std::cout << "\n";
    int i = 2;
    std::cout << i << "\n" ;
    std::cout << ::i << "\n";// to access a global varible, use the scope resolution operator " ::"
    
    return 0; 
}