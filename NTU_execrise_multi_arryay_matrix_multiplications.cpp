# include<iostream>

int main()
{
int arrayA[2][3] = {{1, 1, 1}, {2, 2, 2}};
int arrayB[3][4] = {{1, 1, 1, 1}, {2 ,2 , 2, 2}, {3, 3, 3, 3}};
int arrayC[2][4] = {0};

for(int i = 0; i < 2; i++)
    for(int j = 0; j < 4; j++)
        for(int k = 0; k < 3; k++)
            arrayC[i][j] = arrayA[i][k] + arrayB[k][j];

for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 4; j++)
        std::cout << arrayC[i][j] << " " << std::endl; 
}
}