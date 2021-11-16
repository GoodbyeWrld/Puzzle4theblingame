#include<iostream>
#include<random>

int main()
{
int xsize=14;
int ysize=14;
int xhalf=xsize/2;
int frthx=xhalf/2;
char mazearea[xsize][ysize];

for (size_t i = 0; i < xsize; i++)
{
    for (size_t i2 = 0; i2 < xsize; i2++)
    mazearea[i][i2]='.'; 
}


for (size_t i = 0; i < ysize; i++)
{
    for (size_t i2 = xhalf; i2 <= xhalf+frthx; i2++)
    {
        mazearea[i2][i]='x';
    }
    for (size_t i3 = xhalf; i3 <= xhalf-frthx; i3--)
    {
        mazearea[i3][i]='x';
    }

     
}

for (size_t i = 0; i < xsize; i++)
{
     mazearea[xhalf][i]='x';
}


for (size_t i3 = 0; i3 < xsize; i3++)
{
    
    for (size_t i4 = 0; i4 < xsize; i4++)
    
    std::cout << mazearea[i3][i4]<<"   ";
    std::cout << std::endl;
}

std::string map_mapped[]={};

for (int i = 0; i < ysize; i++)
{
    for (int i2 = 0; i2 < xsize; i2++)
    {
        if (mazearea[i2][i] == 'x')
        {
            std::cout<<i2<< ","<< i<<std::endl;
        }
        
    }
    
{
    /* code */
}/* code */
}







system("pause");
return 0;
}