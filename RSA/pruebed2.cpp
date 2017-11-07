#include"RSA.h"
int main(){
	string p;
	p=ingresar_mensaje();
	pair<pair<string,string>,pair<string,string> >llaves;
	llaves=Generar_llave_RSA();
	p=Cifrar_RSA(llaves.first,p);
	cout<<p<<endl;
	p=Descifrar_RSA(llaves.second,p);
	cout<<p<<endl;
}
