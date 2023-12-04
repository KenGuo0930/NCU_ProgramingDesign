# include<iostream>
# include<string>
using namespace std;


class Window
{
private:
    int width;
    int height;
    int locationX;
    int locationY;
    int status; // 0 : min, 1 : usual, 2 : max
    static int barColor; //0 :gray,

public:
    static int getBarColor();
    static int setBarColor(int color);
};


// We have to initalize a static variable *globally*
int Window::barColor = 0;// 0 : default

int Window::getBarColor()
{
    return barColor;
}

int Window::setBarColor(int color)
{
    barColor = color;
}

int main()
{
    Window w;
    cout << Window::getBarColor();
    cout << "\n";
    Window::setBarColor(1);
    return 0 ;
}