double sqrt(double);

class Vector{
    public:
        Vector(int s);
        double&operator[](int i);
        int size() const;
        
    private:
        double* elem;
}

/*
double sqrt(double d)
{
    
}
*/

Vector::Vector(int s)
    :elem{new double[s]}, sz{s}
{
    
}

double& Vector::operator[](int i)
{
    return elem[i];
}

int Vector::size() const
{
    return sz;
}