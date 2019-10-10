#include <iostream>
 
using namespace std;
 
void intercambiar(int &i , int &j ); //Protipo de la función para intercambiar los valores
 
int main(void)
{
    int a = 2,b = 3;
    cout<<"Valores originales  a = "<<a<<" y b = "<<b<<endl<<endl;
    intercambiar(a,b); //Llmado a la función intercambiar
    cout<<"Luego de la funcion a = "<<a<<" y b = "<<b<<endl<<endl;
 
    return 0;
}
 
void intercambiar(int &i, int &j)
{
    int z;
    z = i;
    i = j;
    j = z;
}

include <iostream>
 
using namespace std;
 
void intercambiar(int, int); //Protipo de la función para intercambiar los valores
 
int main(void)
{
    int a = 2,b = 3;
    cout<<"Valores originales  a = "<<a<<" y b = "<<b<<endl<<endl;
    intercambiar(a,b); //Llmado a la función intercambiar
    cout<<"Luego de la funcion a = "<<a<<" y b = "<<b<<endl<<endl;
 
    return 0;
}
 
void intercambiar(int i, int j)
{
    int z;
    z = i;
    i = j;
    j = z;
}
//#include <iostream>
//using namespace std;
//int SumaDigitos(int);
//int main() {
//    cout << 32890123 << ": " << SumaDigitos(32890123) << endl;
//    return 0;
//}
//int SumaDigitos(int n) {
//    if(n < 10) return n;
//    return n%10+SumaDigitos(n/10);
//}
