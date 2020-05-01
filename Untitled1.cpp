#include <iostream>
using namespace std;

#include <string>
int main(){
	int n;
	cout<<"Ingrese un numero menor que 100 y mayor que 3: "<<endl;
	cin>>n;
	while(n>99 || n<4){
		cout<<"Ingrese un numero menor que 100 y mayor que 3: "<<endl;
		cin>>n;
	}
	cout<<"pasa el while de validacion, n: "<<n<<endl;
	for(int i = n; i > 3; i--){
		cout<<"entra al for1, n: "<<n<<"i: "<<i<<endl;
		int primo1, primo2;
		primo1 = 2;
		bool prime1, prime2;//para chequear si los dos numero que utilizara son primos
		prime1=false, prime2=false;
		if(i % 2 == 0){
			cout<<"entra al if1, n: "<<n<<"i: "<<i<<endl;
			bool verificar;
			verificar = false;
			while (!verificar){
				cout<<"entra al while de verificacion, n: "<<n<<"i: "<<i<<endl;
				
				primo2 = i - primo1;
				
				int bandera,num;//aqui empieza un metodo para ver si los numeros son primos
				bandera=0,num=0;
				num = primo2/2;
				if(primo2 == 0 || primo2 == 1){
					cout<<"entra al if2, n: "<<n<<"i: "<<i<<endl;
					prime2 = false;
				}else{
					for(int j = 2; j < num; j++){
							cout<<"entra al for2, n: "<<n<<"i: "<<i<<endl;
						if(primo2 % j == 0){
							cout<<"entra al if3, n: "<<n<<"i: "<<i<<endl;
							bandera = 1;
							break;
						}
					}
					if(bandera == 0){
						cout<<"entra al if4, n: "<<n<<"i: "<<i<<endl;
						prime2=true;
					}
				}
				if(prime2){
						cout<<"entra al ifprim2.1, n: "<<n<<"i: "<<i<<endl;
					bandera=0;
					num=0;
					num = primo1/2;
					if(primo1 == 0 || primo1 == 1){
						cout<<"entra al ifprim2.2, n: "<<n<<"i: "<<i<<endl;
						prime1 = false;
					}else{
						for(int j = 2; j < num; j++){
							cout<<"entra al FORprim2.1, n: "<<n<<"i: "<<i<<endl;
							if(primo2 % j == 0){
								cout<<"entra al FORifprim2.1, n: "<<n<<"i: "<<i<<endl;
								bandera = 1;
								break;
							}
						}
						if(bandera == 0){
							cout<<"entra al ifprim2.3, n: "<<n<<"i: "<<i<<endl;
							prime1=true;
						}
					}
				}
				
				if(prime2 == true && prime1 == true){
					cout<<"entra al if final, n: "<<n<<"i: "<<i<<endl;
					verificar = true;
					cout<<primo1<<" + "<<primo2<<" = "<<i;
				}else{
					cout<<"entra al else final, n: "<<n<<"i: "<<i<<endl;
					verificar = false;
					primo1++;
				}
			}//fin del while
			cout<<"sale del while de verificacion, n: "<<n<<"i: "<<i<<endl;
		}
		
	}
	return 0;
}
