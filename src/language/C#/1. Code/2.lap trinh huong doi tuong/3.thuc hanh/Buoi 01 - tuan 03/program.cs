using System;

public class Program {
	public static void Main() {
		int so_lan_xem = 1;
		while (so_lan_xem <= 5) {
			byte lua_chon;
			while (true) {
				Console.Clear();
				Console.Write("Danh sach bai tap: (1,2,3,4,5)? ");
				if (byte.TryParse(Console.ReadLine(), out lua_chon) && (lua_chon >= 1 && lua_chon <= 5))
					break;
			}
			Console.Clear();
			switch (lua_chon) {
				case 1:
					Console.WriteLine("[Bai 1]:");
					Console.ReadKey();
					bai_1.Chay();
					break;
				case 2:
					Console.WriteLine("[Bai 2]:");
					Console.ReadKey();
					bai_2.Chay();
					break;
				case 3:
					Console.WriteLine("[Bai 3]:");
					Console.ReadKey();
					bai_3.Chay();
					break;
				case 4:
					Console.WriteLine("[Bai 4]:");
					Console.ReadKey();
					bai_4.Chay();
					break;
				case 5:
					Console.WriteLine("[Bai 5]:");
					Console.ReadKey();
					bai_5.Chay();
					break;
			}
			++so_lan_xem;
		}
		Console.ReadKey();
	}		
}

public class bai_1 {
	public static void Chay() {
		string ho_ten;
		DateTime ngay_sinh;
		bool gioi_tinh;

		Console.Write("Nhap ho ten: ");
		ho_ten = Console.ReadLine();

		Console.Write("Nhap ngay sinh (dd/mm/yyyy): ");
		ngay_sinh = DateTime.Parse(Console.ReadLine());

		Console.Write("Nhap gioi tinh (Nam:true | Nu:false): ");
		gioi_tinh = bool.Parse(Console.ReadLine());

		if (gioi_tinh == true)
			Console.Write(ho_ten + ' ' + ngay_sinh.ToShortDateString() + ' ' + "Nam");
		else
			Console.Write(ho_ten + ' ' + ngay_sinh.ToShortDateString() + ' ' + "Nu");
		Console.ReadKey();
	}
}

public class bai_2 {
	public static void Chay() {
		int a, b, c;
		Console.Write("Nhap a: ");
		a = int.Parse(Console.ReadLine());
		Console.Write("Nhap b: ");
		b = int.Parse(Console.ReadLine());
		Console.Write("Nhap c: ");
		c = int.Parse(Console.ReadLine());

		Console.Write(SoSanh(a, b, c));
		Console.ReadKey();
	}

	static string SoSanh(int a, int b, int c) {
		if (a <= b && b <= c)
			return "increasing";
		else if (a >= b && b >= c)
			return "decreasing";
		else
			return "increasing nor decreasing order";
	}
}

public class bai_3 {
	public static void Chay() {
		int a, b;
		char p;
		Console.Write("Nhap a = ");
		a = int.Parse(Console.ReadLine());
		do {
			Console.Write("Nhap phep tinh: ");
			p = char.Parse(Console.ReadLine());
		} while (p != '+' && p != '-' && p != '*' && p != '/');
		Console.Write("Nhap b = ");
		b = int.Parse(Console.ReadLine());

		switch (p) {
			case '+':
				Console.Write("{0} + {1} = {2}", a, b, a+b);
				break;
			case '-':
				Console.Write("{0} - {1} = {2}", a, b, a-b);
				break;
			case '*':
				Console.Write("{0} * {1} = {2}", a, b, a*b);
				break;
			case '/':
				if (b == 0)
					Console.Write("Khong chia duoc !");
				else
					Console.Write("{0} / {1} = {2}", a, b, a/b);
				break;
		}
		Console.ReadKey();
	}
}

public class bai_4 {
	public static void Chay() {
		char c;
		Console.Write("Nhap 1 ki tu: ");
		c = char.Parse(Console.ReadLine());

		switch (c) {
			case 'u': case 'e': case 'o': case 'a': case 'i':
			case 'U': case 'E': case 'O': case 'A': case 'I':
				Console.Write(c + " la nguyen am");
				break;
			default:
				Console.Write(c + " la phu am !");
				break;
		}
		Console.ReadKey();
	}
}

public class bai_5 {
	public static void Chay() {
		short n;
		while (true) {
			Console.Clear();
			Console.Write("Nhap kich thuoc mang: ");
			bool check = short.TryParse(Console.ReadLine(), out n);
			if (check && (n >=3 && n <= 20))
				break;
		}

		float[] a = new float[n];
		for (int i = 0; i < n; i++) {
			a[i] = float.Parse(Console.ReadLine());
		}

		sapXep(a, n);
		Console.Write("Mang sap xep tang dan: ");
		for (int i = 0; i < n; i++) {
			Console.Write(a[i]);
			Console.Write(' ');
		}
		Console.WriteLine();
		Console.Write("So phan tu am trong mang: {0}", SoPhanTuAm(a, n));
		Console.ReadKey();
	}

	static void swap(ref float a, ref float b) {
		float x = a;
		a = b;
		b = x;
	}

	static void sapXep(float[] a, int size) {
		for (int i = 0; i < size-1; i++) {
			for (int j = i+1; j < size; j++)
				if (a[i] > a[j])
					swap(ref a[i], ref a[j]);
		}			
	}

	static int SoPhanTuAm(float[] a, int size) {
		int dem = 0;
		for (int i = 0; i < size; i++) {
			if (a[i] < 0)
				++dem;
		}
		return dem;
	}
}