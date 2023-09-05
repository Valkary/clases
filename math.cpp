#include "iostream"
#include "cmath"

using namespace std;

int operation;

int main()
{
    while (true)
    {
        cout << "Welcome to the universal math solver! It can solve any possible operation! By Carlos @MilesP20202" << endl;
        cout << "What type of operation would you like to do?";
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exponents" << endl;
        cout << "6. Square Roots" << endl;
        cout << "7. Cube Roots" << endl;
        cout << "8. Square/Rectangle Area Calculation" << endl;
        cout << "9. Cube/Rectangular Prism Volume Calculation" << endl;
        cout << "10. Circle Area Calculation" << endl;
        cout << "11. Triangle Area Calculation" << endl;
        cout << "12. Pythagorean Theorem Calculation" << endl;
        cout << "13. Quadratic Formula Calculation" << endl;
        cout << "14. Distance Formula Calculation" << endl;
        cout << "15. Slope Calculation" << endl;
        cout << "16. Midpoint Formula Calculation" << endl;
        cout << "17. Area of a Trapezoid Calculation" << endl;
        cout << "18. Area of a Parallelogram Calculation" << endl;
        cout << "19. Area of a Rhombus Calculation" << endl;
        cout << "20. Area of a Kite Calculation" << endl;
        cout << "21. Area of a Regular Polygon Calculation" << endl;
        cout << "22. Area of a Sector Calculation" << endl;
        cout << "24. Surface Area of a Sphere Calculation" << endl;
        cout << "25. Riemann Hypothesis (Beta)" << endl;
        cout << "0. Exit" << endl;

        cout << "Please enter the number of the operation you would like to do: ";
        cin >> operation;
        if (operation == 1)
        {
            int add1;
            int add2;
            cout << "Please enter the first number you would like to add: ";
            cin >> add1;
            cout << "Please enter the second number you would like to add: ";
            cin >> add2;
            cout << "The sum of " << add1 << " and " << add2 << " is " << add1 + add2 << endl;
        }
        if (operation == 2)
        {
            int sub1;
            int sub2;
            cout << "Please enter the first number you would like to subtract: ";
            cin >> sub1;
            cout << "Please enter the second number you would like to subtract: ";
            cin >> sub2;
            cout << "The difference of " << sub1 << " and " << sub2 << " is " << sub1 - sub2 << endl;
        }
        if (operation == 3)
        {
            int mult1;
            int mult2;
            cout << "Please enter the first number you would like to multiply: ";
            cin >> mult1;
            cout << "Please enter the second number you would like to multiply: ";
            cin >> mult2;
            cout << "The product of " << mult1 << " and " << mult2 << " is " << mult1 * mult2 << endl;
        }

        if (operation == 4)
        {
            int div1;
            int div2;
            cout << "Please enter the first number you would like to divide: ";
            cin >> div1;
            cout << "Please enter the second number you would like to divide: ";
            cin >> div2;
            cout << "The quotient of " << div1 << " and " << div2 << " is " << div1 / div2 << endl;
        }

        if (operation == 5)
        {
            int base;
            int exp2;
            cout << "Please enter the base number: ";
            cin >> base;
            cout << "Please enter the exponent: ";
            cin >> exp2;
            cout << "The answer is " << pow(base, exp2) << endl;
        }

        if (operation == 6)
        {
            int num;
            cout << "Please enter the number you would like to find the square root of: ";
            cin >> num;
            cout << "The square root of " << num << " is " << sqrt(num) << endl;
        }

        if (operation == 7)
        {
            int num;
            cout << "Please enter the number you would like to find the cube root of: ";
            cin >> num;
            cout << "The cube root of " << num << " is " << cbrt(num) << endl;
        }

        if (operation == 8)
        {
            int length;
            int width;
            cout << "Please enter the length of the square/rectangle: ";
            cin >> length;
            cout << "Please enter the width of the square/rectangle: ";
            cin >> width;
            cout << "The area of the square/rectangle is " << length * width << endl;
        }

        if (operation == 9)
        {
            int length;
            int width;
            int height;
            cout << "Please enter the length of the cube/rectangular prism: ";
            cin >> length;
            cout << "Please enter the width of the cube/rectangular prism: ";
            cin >> width;
            cout << "Please enter the height of the cube/rectangular prism: ";
            cin >> height;
            cout << "The volume of the cube/rectangular prism is " << length * width * height << endl;
        }

        if (operation == 10)
        {
            int radius;
            cout << "Please enter the radius of the circle: ";
            cin >> radius;
            cout << "The area of the circle is " << 3.14159265358979323846 * radius * radius << endl;
        }

        if (operation == 11)
        {
            int base;
            int height;
            cout << "Please enter the base of the triangle: ";
            cin >> base;
            cout << "Please enter the height of the triangle: ";
            cin >> height;
            cout << "The area of the triangle is " << 0.5 * base * height << endl;
        }

        if (operation == 12)
        {
            int a;
            int b;
            int c;
            cout << "Please enter the first side of the triangle: ";
            cin >> a;
            cout << "Please enter the second side of the triangle: ";
            cin >> b;
            cout << "Please enter the third side of the triangle: ";
            cin >> c;
            cout << "The answer is " << sqrt(a * a + b * b + c * c) << endl;
        }

        if (operation == 13)
        {
            int a;
            int b;
            int c;
            cout << "Please enter the first side of the triangle: ";
            cin >> a;
            cout << "Please enter the second side of the triangle: ";
            cin >> b;
            cout << "Please enter the third side of the triangle: ";
            cin >> c;
            cout << "The answer is " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a) << " and " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
        }

        if (operation == 14)
        {
            int x1;
            int y1;
            int x2;
            int y2;
            cout << "Please enter the x coordinate of the first point: ";
            cin >> x1;
            cout << "Please enter the y coordinate of the first point: ";
            cin >> y1;
            cout << "Please enter the x coordinate of the second point: ";
            cin >> x2;
            cout << "Please enter the y coordinate of the second point: ";
            cin >> y2;
            cout << "The answer is " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
        }

        if (operation == 15)
        {
            int x1;
            int y1;
            int x2;
            int y2;
            cout << "Please enter the x coordinate of the first point: ";
            cin >> x1;
            cout << "Please enter the y coordinate of the first point: ";
            cin >> y1;
            cout << "Please enter the x coordinate of the second point: ";
            cin >> x2;
            cout << "Please enter the y coordinate of the second point: ";
            cin >> y2;
            cout << "The answer is " << (y2 - y1) / (x2 - x1) << endl;
        }

        if (operation == 16)
        {
            int x1;
            int y1;
            int x2;
            int y2;
            cout << "Please enter the x coordinate of the first point: ";
            cin >> x1;
            cout << "Please enter the y coordinate of the first point: ";
            cin >> y1;
            cout << "Please enter the x coordinate of the second point: ";
            cin >> x2;
            cout << "Please enter the y coordinate of the second point: ";
            cin >> y2;
            cout << "The answer is (" << (x1 + x2) / 2 << ", " << (y1 + y2) / 2 << ")" << endl;
        }

        if (operation == 17)
        {
            int a;
            int b;
            int h;
            cout << "Please enter the first base of the trapezoid: ";
            cin >> a;
            cout << "Please enter the second base of the trapezoid: ";
            cin >> b;
            cout << "Please enter the height of the trapezoid: ";
            cin >> h;
            cout << "The area of the trapezoid is " << 0.5 * (a + b) * h << endl;
        }

        if (operation == 18)
        {
            int b;
            int h;
            cout << "Please enter the base of the parallelogram: ";
            cin >> b;
            cout << "Please enter the height of the parallelogram: ";
            cin >> h;
            cout << "The area of the parallelogram is " << b * h << endl;
        }

        if (operation == 19)
        {
            int d1;
            int d2;
            cout << "Please enter the first diagonal of the rhombus: ";
            cin >> d1;
            cout << "Please enter the second diagonal of the rhombus: ";
            cin >> d2;
            cout << "The area of the rhombus is " << 0.5 * d1 * d2 << endl;
        }

        if (operation == 20)
        {
            int d1;
            int d2;
            cout << "Please enter the first diagonal of the kite: ";
            cin >> d1;
            cout << "Please enter the second diagonal of the kite: ";
            cin >> d2;
            cout << "The area of the kite is " << 0.5 * d1 * d2 << endl;
        }

        if (operation == 21)
        {
            int p;
            int a;
            cout << "Please enter the perimeter of the polygon: ";
            cin >> p;
            cout << "Please enter the apothem of the polygon: ";
            cin >> a;
            cout << "The area of the polygon is " << 0.5 * p * a << endl;
        }

        if (operation == 22)
        {
            int r;
            int theta;
            cout << "Please enter the radius of the sector: ";
            cin >> r;
            cout << "Please enter the angle of the sector: ";
            cin >> theta;
            cout << "The area of the sector is " << 0.5 * r * r * theta << endl;
        }

        if (operation == 24)
        {
            int r;
            cout << "Please enter the radius of the sphere: ";
            cin >> r;
            cout << "The surface area of the sphere is " << 4 * 3.14159265358979323846 * r * r << endl;
        }

        if (operation == 25)
        {
            int secret_user;
            cout << secret_user << endl;
            cin >> secret_user;
            if (secret_user == 230691)
            {
                cout << "C x C 4 ever! a41567@outlook.es" << endl;
            }
            else
            {
                cout << "You are not the chosen one" << endl;
                return 286;
            }
        }

        if (operation == 0)
        {
            break;
        }
    }
}