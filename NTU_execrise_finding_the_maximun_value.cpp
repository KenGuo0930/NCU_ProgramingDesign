# include<iostream>

int main()
{

const int VALUE_LEN = 10;
float value[VALUE_LEN] = {0};
for(int i = 0; i < VALUE_LEN ; i++)
{
    std::cout << "set value " << i << " : " ;
    std::cin >> value[i];
}

float max = value[0];
for(int i = 0; i < VALUE_LEN ; i++)
{
    if(value[i] > max)
        max = value[i];
}
std::cout <<"max value : "<< max;
}