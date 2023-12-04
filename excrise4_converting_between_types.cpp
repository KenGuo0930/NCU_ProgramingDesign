# include<iostream>
# include<string>
int main()
{
std::string text = "100";
std::string text2 = "10.05";
int value = 100;
std::cout << 1 + stoi(text) << std::endl; //string convert to interger 
std::cout << 1 +  stof(text2) << std::endl; //strung convert to float
std::cout << "I got " << std::to_string(value) << " score !!" << std::endl;
}