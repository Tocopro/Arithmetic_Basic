
int main()
{
    double pi = 3.14159265;
    cout << fixed << setprecision(3) << endl;
    cout << "The Value of pi 4 decimal place of total width 8 :|" << setw(8) << pi << "|" << endl;
    cout << "The Value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << "The Value of pi 4 decimal places of total width 1 : |" << setw(-1) << pi << "|" << endl;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   cout << "The Result of first expression is : " << (-1 + 4 * 6) << "\n";
   cout << "The Result of the second expression is : " << ((35 + 5) % 7) << endl;
   cout << "The Result of third expression is : " << ((14 +- 4 * 6) / 11) << endl;
   cout << "The Result of fourth expression is : " << (2 + 15 / 6 * 1 - 7 % 2) << endl;

}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   int first, second, third;
   first = 25;
   second = 39;
   cout << "Swapping first " << first << " with second " << second << " is " << endl;
   third = first;
   first = second;
   second = third;
   cout << "After swap " << first << " first " << second << " second";

}
#include <iostream>
using namespace std;
int main()
{
    double radii, volume;
    double pi = 3.14159265;
    cout << " How to Calculate the Volume of a Sphere volume = 4 /3 pi radius cubed " << endl;
    cout << "Enter the Radius of the sphere :" << endl;
    cin >> radii;
    volume = ((4 * pi) * (radii * radii * radii))/ 3 ;
    cout << "The Volume of the Sphere with radius " << radii << " = " << volume << endl;

}
#include <iostream>
using namespace std;
int main()
{
    int length, width, height;
    int volume;
    cout << "Calculate the volume of a cube : " << endl;
    cout << "Enter the Length, Width and Height respectively :" << endl;
    cin >> length;
    cin >> width;
    cin >> height;
    volume = length * width * height;
    cout << "The Volume of the cube is " << volume << endl;


}
#include <iostream>
using namespace std;
int main()
{
    int radius, height;
    int volume;
    double pi = 3.141592;
    cout << "Calculate the Volume of a Cylinder: " << endl;
    cout << "Enter the Radius: ";
    cin >> radius;
    cout << "Enter the Height: " ;
    cin >> height;
    volume = height * ( pi * (radius * radius));
    cout << "\nThe Volume = " << volume << " units cubed";

}

