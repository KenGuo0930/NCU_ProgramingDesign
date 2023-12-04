# include<iostream>

int main()
{

int array[] = {1, 2, 3};
int length = sizeof(array) / sizeof(array[0]);
std::cout << length << "\n";
for(int i = 0; i < length ; i++)
{
    std::cout << array[i] << " ";
}
    return 0;
}