 #include<iostream>
using namespace std;
//CREADO POR LEIVER PAZMIÑO ReyDemo
int main() 
{
	float L,P;
	cout<<"ingrese el primer numero que desea comparar:   ";
	cin>> L;
	cout<<"ingrese el segundo numero que desesa comparar:  ";
	cin>> P;
	if(L>P)
	{
		cout<<"es el primer numero es mayor:  ";

	}
	
	else if(L==P)
	{
		cout<<"son iguales:  ";
	}
	else if(L<P)
	{  
		cout<<"el segundo nuemro es mayor:  ";
	}

	return(0);
}
