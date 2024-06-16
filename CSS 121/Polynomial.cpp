#include <iostream>
#include <cmath>
using namespace std;

class Link
{
public:
    double coefficient;
    int exponent;
    Link *next;

    Link(double coef, int exp, Link *nextval = nullptr)
    {
        coefficient = coef;
        exponent = exp;
        next = nextval;
    }
};

class Polynomial
{
private:
    Link *head;

public:
    Polynomial()
    {
        head = new Link(0, 0);
    }

    void insert(double coef, int exp)
    {
        Link *current = head;
        while (current->next != nullptr && current->next->exponent > exp)
        {
            current = current->next;
        }
        if (current->next != nullptr && current->next->exponent == exp)
        {
            current->next->coefficient += coef;
        }
        else
        {
            current->next = new Link(coef, exp, current->next);
        }
    }

    void display()
    {
        Link *current = head->next;
        while (current != nullptr)
        {
            cout << current->coefficient;
            if (current->exponent != 0)
            {
                cout << "x^" << current->exponent;
            }
            if (current->next != nullptr)
            {
                cout << " + ";
            }
            current = current->next;
        }
        cout << endl;
    }

    Polynomial add(const Polynomial &other)
    {
        Polynomial result;
        Link *current = head->next;
        Link *other_current = other.head->next;
        while (current != nullptr || other_current != nullptr)
        {
            int exp;
            double coef;
            exp = current->exponent;
            coef = current->coefficient + other_current->coefficient;
            current = current->next;
            other_current = other_current->next;
            result.insert(coef, exp);
        }
        return result;
    }

    Polynomial multiply(const Polynomial &other)
    {
        Polynomial result;
        Link *current = head->next;
        while (current != nullptr)
        {
            Link *other_current = other.head->next;
            while (other_current != nullptr)
            {
                result.insert(current->coefficient * other_current->coefficient, current->exponent + other_current->exponent);
                other_current = other_current->next;
            }
            current = current->next;
        }
        return result;
    }
};
int main()
{
    Polynomial poly1;
    poly1.insert(2, 5);
    poly1.insert(4, 3);
    poly1.insert(3, 2);
    poly1.insert(5, 0);

    Polynomial poly2;
    poly2.insert(3, 5);
    poly2.insert(5, 3);
    poly2.insert(4, 2);
    poly2.insert(6, 0);

    cout << "Polynomial 1: ";
    poly1.display();

    cout << "Polynomial 2: ";
    poly2.display();

    cout << "Adding polynomial 2 to polynomial 1: ";
    Polynomial sum = poly1.add(poly2);
    sum.display();

    cout << "Multiplying polynomial 1 by polynomial 2: ";
    Polynomial product = poly1.multiply(poly2);
    product.display();

    return 0;
}

/*
Big O Notation
Worst Case ของ insert(): O(n)
Best Case ของ insert(): O(1)
Worst Case ของ add(): O(n + m)
Best Case ของ add(): O(1)๐
Worst Case ของ multiply(): O(n * m)
Best Case ของ multiply(): O(1)

*/
