void foo()
{
	x = 21;
	int x;
	x = 42;
	

}

int main(int argc, char const *argv[])
{
	foo();	
	return 0;
}

/* 
	El código no funcionará ya que
	la primera linea  x=21 no significa nada en c
	porque es un lenguaje tipado y no se le ha especificado su tipo
	entonces no puede hacer ningun binding entre este y la variable
*/