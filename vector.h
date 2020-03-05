template<typename T>

struct Vector2
{
    T x , y;

    Vector2<T>& operator+=( Vector2<T> const& v )
    {
        x += v.x; y += v.y;
        return *this;
    }

    Vector2<T>& operator-=( Vector2<T> const& v )
    {
        x -= v.x; y-= v.y;
        return *this;
    }

    Vector2<T>& operator*=( T const& n )
    {
        x = n*x; y = n*y;
        return *this;
    }

    Vector2<T>& operator/=( T const& n )
    {
        x = x/n; y = y/n;
        return *this;
    }

};

template<typename T>

Vector2<T> operator+( Vector2<T> const& v, Vector2<T> const& w )
{
    return Vector2<T>{ v.x + w.x, v.y + w.y };
}

template<typename T>

Vector2<T> operator-( Vector2<T> const& v, Vector2<T> const& w )
{
    return Vector2<T>{ v.x - w.x, v.y - w.y };
}

template<typename T>

Vector2<T> operator*( Vector2<T> const& v, T const& n)
{
    return Vector2<T>{ v.x*n, v.y*n };
}

template<typename T>
Vector2<T> operator*( T const& n, Vector2<T> const& v)
{
    return Vector2<T>{ v.x*n, v.y*n };
}

template<typename T>

Vector2<T> operator/( Vector2<T> const& v, T const& n)
{
    return Vector2<T>{ v.x/n, v.y/n };
}

template<typename T>

auto dot( Vector2<T> const& v , Vector2<T> const& w )
{
        return v.x*w.x+v.y*w.y;
}

template<typename T>

auto length( Vector2<T> const& v )
{
    return sqrt(v.x*v.x+v.y*v.y);
}

template<typename T>

auto sqlength( Vector2<T> const& v )
{
    return v.x*v.x+v.y*v.y;
}   

template<typename T>

Vector2<T> normalize( Vector2<T>& v )
{
    return Vector2<T>{ v.x/length(v) , v.y/length(v) };
}

template<typename T>

std::ostream& operator<<( std::ostream& o , Vector2<T> const& v )
{
    o << v.x << " " << v.y;
    return o;
}

template<typename T>

std::istream& operator>>( std::istream& i , Vector2<T>& v)
{
    i >> v.x;
    i >> v.y;
    return i;
}