import java.util.Scanner; 


public class Calculator{

		static{
			
			System.loadLibrary("calculator");
		}
		
		public native void display();
		
		public native void displayName(String name);
		
		public native int sum(int a, int b);
		
		public native byte[] sortArray(byte[] arr);
		
		//////////// Main test /////////////
		
		public static void main(String[] agrs)
		{
			int a, b, c, d;
			byte[] arr = {5,4,6,2,9};
			
			Scanner ip= new Scanner(System.in);
			System.out.println("Hello from java file");
			Calculator cal = new Calculator();
			cal.display();
			cal.displayName("Lac Lac");
			System.out.println("Day la phep cong, nhap so dau tien:");
			a = ip.nextInt();
			System.out.println("Day la phep cong, nhap so thu hai:");
			b = ip.nextInt();
			cal.sum(a,b);
			System.out.println("Ket qua cua a + b = " + cal.sum(a,b) + "\n");
			
			
			System.out.println("Mang Truoc Sap Xep: ");
			for(byte num: arr)
			{
					System.out.print(" "+num);
			}
			
			System.out.println("\n Mang Sau Sap Xep: ");
			byte[] arrSolve = cal.sortArray(arr);
			for(byte num: arrSolve)
			{
					System.out.print(" "+num);
			}
			
			System.out.println("\n End");
		}
		
		
	
	
}
