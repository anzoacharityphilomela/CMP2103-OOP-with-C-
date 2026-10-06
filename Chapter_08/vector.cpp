import std;
using namespace std;

class Vector
{
private:
    int x, y;

public:
    Vector(int x, int y)
        : x{x}, y{y}
    {
    }
};

Vector operator+(const Vector &other)
{
    return Vector{x + other.x, y + other.y};
}

Vector operator-(const Vector &other)
{
    return Vector{x - other.x, y - other.y};
}

bool operator==(const Vector &other)
{
    return x == other.x && y == other.y;
}

void print()
{
    std::print("Vector({}, {})\n", x, y);
}

int main()
{
    Vector v1{2, 4};
    Vector v2{5, 3};

    Vector v3 = v1 + v2;

    // v3.print();

    // std::println("{}", v1 == v2);
    // print(v3);
    print(v1 - v2);
}