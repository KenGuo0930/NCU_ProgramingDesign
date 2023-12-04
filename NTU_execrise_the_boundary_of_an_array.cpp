# include<iostream>

int main()
{

int array[100] = {0};
for(int i = 0; i < 100; i++)
{
    std::cout << array[i] << " ";
    if(i % 10 == 9)
        std::cout << "\n";
}
    return 0;
}