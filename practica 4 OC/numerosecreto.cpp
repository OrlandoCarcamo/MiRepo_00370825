#include <iostream>
using namespace std;

int main()
{
    int ns = 57;
    int entradanumero;
    do 
     {
        cout << "Adivinemos el numero, porfavor, escriba un numero entero positivo" << endl;
        cin >> entradanumero;
     if (entradanumero > ns)
        {
            cout << "Numero muy alto" << endl;
        }
     else if (entradanumero < ns)
        {
            cout << "Numero muy bajo" << endl;
        }
    }    
    while (entradanumero != ns);
return 0;
}
