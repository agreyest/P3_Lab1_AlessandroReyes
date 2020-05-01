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
	for(int i = n; i > 3; i--){
		int primo1, primo2;
		primo1 = 2;
		bool prime1, prime2;//para chequear si los dos numero que utilizara son primos
		prime1=false, prime2=false;
		if(i % 2 == 0){
			bool verificar;
			verificar = false;
			while (!verificar){
				
				primo2 = i - primo1;
				
				
				int bandera,num;//aqui empieza un metodo para ver si los numeros son primos
				bandera=0,num=0;
				num = primo2/2;
				if(primo2 == 0 || primo2 == 1){
					prime2 = false;
				}else{
					for(int j = 2; j <= num; j++){
						if(primo2 % j == 0){
							bandera = 1;
							break;
						}
					}
					if(bandera == 0){
						prime2=true;
					}
				}
				if(prime2){
					bandera=0;
					num=0;
					num = primo1/2;
					if(primo1 == 0 || primo1 == 1){
						prime1 = false;
					}else{
						for(int j = 2; j < num; j++){
							if(primo2 % j == 0){
								bandera = 1;
								break;
							}
						}
						if(bandera == 0){
							prime1=true;
						}
					}
				}
				
				if(prime2 == true && prime1 == true){
					verificar = true;
					cout<<primo1<<" + "<<primo2<<" = "<<i<<endl;
				}else{
					verificar = false;
					primo1++;
				}
			}//fin del while
		}
		
	}
	return 0;
}
