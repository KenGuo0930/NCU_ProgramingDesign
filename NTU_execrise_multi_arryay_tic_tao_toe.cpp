# include<iostream>

int main()
{
int array[3][3] = {{1, 0, 1}, {1, 1, 0}, {0, 0, 1}};
for(int i = 0; i <= 2; i++)
{
    if(array[i][0] == array[i][1] && array[i][1] == array[i][2])
    {
        std::cout << array[i][0] << std::endl;
        break;
    }
}
}