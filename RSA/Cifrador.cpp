#include "Cifrador.h"
string Cifrar(string lla_pu1,string lla_pu2,string mensaje){
	RSA rsa;
	rsa.llave_publica.first=str_a_ZZ(lla_pu1);
	rsa.llave_publica.second=str_a_ZZ(lla_pu2);
	RSA_cifrador cifrador(rsa.llave_publica);
	cifrador.set_mensaje(mensaje);
	cifrador.cifrar();
	rsa.cifrado=cifrador.get_cifrado();
	return vec_a_str(cifrado);
}
string Descifrar(string lla_pri1,string lla_pri2,string cifrado){
	RSA rsa;
	rsa.llave_privada.first=str_a_ZZ(lla_pri1);
	rsa.llave_privada.second=str_a_ZZ(lla_pri2);
	RSA_descifrador descifrador(rsa.llave_privada);
	rsa.cifrado=str_a_vec(cifrado);
	descifrador.set_cifrado(rsa.cifrado);
	descifrador.descifrar();
	rsa.mensaje=descifrador.get_mensaje();
	return rsa.mensaje:
}
()
