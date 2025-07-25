#include <iostream>
#include <cmath>

class Vector2 {

public:
    float X;
    float Y;

private:
    Vector2 Add(const Vector2& other) const {

        return Vector2(X + other.X, Y + other.Y);

    }

    Vector2 Mutiply(const Vector2& other) const {

        return Vector2(X * other.X, Y * other.Y);

    }

    bool Equal(float a, float b) const {

        return abs(a - b) < 1e-5;

    }

public:
    Vector2(float x, float y)
        : X(x), Y(y) {}

    Vector2 operator +(const Vector2& other) const {

        return Add(other);

    }
    
    Vector2 operator *(const Vector2& other) const {

        return Mutiply(other);

    }

    Vector2& operator +=(const Vector2& other) {

        *this = *this + other;
        return *this;

    }

    bool operator ==(const Vector2& other) const {

        return Equal(this->X, other.X) && Equal(this->Y, other.Y);

    }

    bool operator !=(const Vector2& other) const {

        return !(*this == other);

    }

};

std::ostream& operator << (std::ostream& os, const Vector2& vector) {

    return os << "(" << vector.X << ", " << vector.Y << ")";

}


int main() {

    Vector2 Pos(1.0f, 1.0f);
    Vector2 Speed(1.5f, 2.0f);
    Vector2 PowerUp(1.1f, 1.1f);

    Pos += Speed * PowerUp;

    std::cout << Pos;

    if (Pos != Speed) {}

    if (Pos == Speed) {}


}