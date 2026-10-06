import std;

using namespace std;

class Circle
{
public:
    double radius; // private data member
    double getRadius()
    { // public member function to access private data member
        return radius;
    }

    void setRadius(double r)
    { // public member function to modify private data member
        radius = r;
    }

};

int main()
{
    Circle small_circle;
    small_circle.radius = 5.0; // Set the radius using the public member function

    print("Radius of the circle: {}\n", small_circle.getRadius()); // Get the radius using the public member function
}