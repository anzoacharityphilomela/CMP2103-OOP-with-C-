import std;
using namespace std;

class Vector
{
    // Private data members
private:
    int x, y;

    // Public member functions
public:
    Vector(int x, int y)
        : x{x}, y{y}
    {
    }

    int get_x() const { return x; }
    int get_y() const { return y; }
};

// Overloaded operators
Vector operator+(const Vector &a, const Vector &b)
{
    return Vector{a.get_x() + b.get_x(), a.get_y() + b.get_y()};
}

Vector operator-(const Vector &a, const Vector &b)
{
    return Vector{a.get_x() - b.get_x(), a.get_y() - b.get_y()};
}

bool operator==(const Vector &a, const Vector &b)
{
    return a.get_x() == b.get_x() && a.get_y() == b.get_y();
}

void print(const Vector &v)
{
    std::print("Vector({}, {})\n", v.get_x(), v.get_y());
}


int main()
{
    Vector v1{2, 4};
    Vector v2{5, 3};

    Vector v3 = v1 + v2;

    // v3.print();

    // std::println("{}", v1 == v2);
    print(v1 - v2);
}