#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void displayMainMenu();
void displayAreaMenu();
int getOptionFromUser(int totalOptions);
void handleAreaMenuOption(int option);
void calculateAreaOfRectangle();
void calculateAreaOfCircle();
void calculateAreaOfRightTriangle();

int main()
{
  bool should_continue = true;
  do
  {
    displayMainMenu();
    int option = getOptionFromUser(3);
    switch(option)
    {
      case 1:
      {
        displayAreaMenu();
        int areaOption = getOptionFromUser(3);
        handleAreaMenuOption(areaOption);
      } break;
      
      case 2:
      {

      } break;

      case 3:
      {
        should_continue = false;
      } break;
    }
  } while(should_continue);
}

void displayMainMenu()
{
  cout << "-- Main Menu --" << endl;
  cout << "1) Calculate Area" << endl;
  cout << "2) Calculate Volume" << endl;
  cout << "3) Exit Program" << endl;
}

void displayAreaMenu()
{
  cout << "-- Area Menu --" << endl;
  cout << "1) Rectangle" << endl;
  cout << "2) Circle" << endl;
  cout << "3) Right Triangle" << endl;
}

int getOptionFromUser(int totalOptions)
{
  int value = 0;
  while(value < 1 || value > totalOptions)
  {
    cout << "Enter option: ";
    cin >> value;
  }
  return value;
}

void handleAreaMenuOption(int option)
{
  switch(option)
  {
    case 1:
    {
      calculateAreaOfRectangle();
    } break;

    case 2:
    {
      calculateAreaOfCircle();
    } break;

    case 3:
    {
      calculateAreaOfRightTriangle();
    } break;
  }
}

void calculateAreaOfRectangle()
{
  double width, height;

  cout << "Enter width: ";
  cin >> width;

  cout << "Enter height: ";
  cin >> height;

  double area = width * height;
  cout << "Area of rectangle is " << area << endl;
}

void calculateAreaOfCircle()
{

}

void calculateAreaOfRightTriangle()
{

}
