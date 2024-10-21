class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D() : x(0.0), y(0.0) {}
    Wektor2D(double xVal, double yVal) : x(xVal), y(yVal) {}

    double getX() const
    {
        return x;
    }

    void setX(double xVal)
    {
        x = xVal;
    }

    double getY() const
    {
        return y;
    }

    void setY(double yVal)
    {
        y = yVal;
    }

    Wektor2D operator+(const Wektor2D& other) const
    {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) const
    {
        return (x * other.x) + (y * other.y);
    }
};
