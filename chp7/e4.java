class App{
	public static int num;
	public static int fun (){
		num+=4;
		return num;
	}
	public static void main(String[] args) {
		num = 10;
		int b = fun() + num;
		num = 10;
		int c = num + fun();
		System.out.print(b);
 		System.out.print(c);
	}
}
/*
	
	Será de izquierda a derecha el primer resultado es
	28 y el otro 24 (14 + 14) y (10 + 14)
	
*/