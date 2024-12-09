// Finding Inertia of flywheel 

#include <bits/stdc++.h>
#define G 98
#define w 29
#define r 1.21
#define h 102.3

using namespace std;

int main()
{
    int M, n1, n2;

    cout << "M: ";
    cin >> M;
    cout << "n1, n2: ";
    cin >> n1 >> n2;
    double a = 2*M*G*h;
    double b = M * pow(w, 2) * pow(r, 2);
    double c = pow(w, 2);
    double d = 1 + (double)n1/n2;
    double Inertia = (a - b)/(c*d);

    cout << "Inertia: " << Inertia << endl;
 
    return 0;
}