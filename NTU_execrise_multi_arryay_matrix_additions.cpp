# include<iostream>

int main()
{
int arrayA[2][3] = {{1, 2, 3}, {1, 2, 3}};
int arrayB[2][3] = {{4, 5, 6}, {7 ,8 , 9}};
int arrayC[2][3] = {0};

for(int i = 0; i < 2; i++)
    for(int j = 0; j < 3; j++)
        arrayC[i][j] = arrayA[i][j] + arrayB[i][j];

std::cout << arrayC << std::endl;

for(int i = 0; i < 2; i++)
{
    for(int j = 0 ; j < 3; j++)
        std::cout << arrayC[i][j] << " " << std::endl;
}
}