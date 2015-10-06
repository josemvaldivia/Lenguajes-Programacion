public class fifth {
	
	public static void foo(){
		x = 21;
		int x;
		x = 42;

	}

	public static void main(String[] args) {
		foo();
	}

	
}

/* 
	El código no funcionará ya que
	la primera linea  x=21 no significa nada en java
	porque es un lenguaje tipado y no se le ha especificado su tipo
	entonces no puede hacer ningun binding entre este y la variable
*/