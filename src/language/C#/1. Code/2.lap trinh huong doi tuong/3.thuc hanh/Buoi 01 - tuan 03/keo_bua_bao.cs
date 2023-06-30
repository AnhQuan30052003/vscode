using System;

public class Program {
	public static void Main() {
		while (true) {
			Console.Clear();
			int nguoi_chon = 0, may_chon = 0, tra_loi;
			TieuDe();
			NguoiChoiChon(ref nguoi_chon);
			MayTinhChon(ref may_chon);
			KetQua(nguoi_chon, may_chon);
			while (true) {
				Console.Write("Ban co muon choi tiep? (1: co | 2: khong): ");
				if (int.TryParse(Console.ReadLine(), out tra_loi) && (tra_loi == 1 || tra_loi == 2)) {
					if (tra_loi == 2) {
						return;
					}
					break;
				}
			}
		}
	}
	// ------------------------------------------------------------------------------------------------------
	static void TieuDe() {
		Console.WriteLine("\t**************************************************");
		Console.WriteLine("\t*             TRO CHOI KEO, BUA, BAO             *");
		Console.WriteLine("\t*                 CHON 1 LA KEO                  *");
		Console.WriteLine("\t*                 CHON 2 LA BUA                  *");
		Console.WriteLine("\t*                 CHON 3 LA BAO                  *");
		Console.WriteLine("\t**************************************************");
	}

	static void MayTinhChon(ref int may_chon) {
		Random rd = new Random();
        may_chon = rd.Next(1,3);

		if (may_chon == 1)
			Console.WriteLine("May da chon keo");
		else if (may_chon == 2)
			Console.WriteLine("May da chon bua");
		else 
			Console.WriteLine("May da chon bao");        
	}

	static void NguoiChoiChon(ref int nguoi_chon) {
		while (true) {
			Console.Write("Moi ban chon: ");
			if (int.TryParse(Console.ReadLine(), out nguoi_chon) && nguoi_chon >= 1 && nguoi_chon <= 3)
				break;
			Console.Clear();
			TieuDe();
		}

		if (nguoi_chon == 1)
			Console.WriteLine("Ban da chon keo");
		else if (nguoi_chon == 2)
			Console.WriteLine("Ban da chon bua");
		else 
			Console.WriteLine("Ban da chon bao");
	}

	static void KetQua(int nguoi_chon, int may_chon) {
		Console.Write("Ket qua: ");
		if (nguoi_chon == may_chon) {
			Console.WriteLine("Hoa");
		}
		else if (nguoi_chon == 1) {
			if (may_chon == 3)
				Console.WriteLine("Ban thang");
			else
				Console.WriteLine("Ban thua");
		}
		else if (nguoi_chon == 2) {
			if (may_chon == 1)
				Console.WriteLine("Ban thang");
			else
				Console.WriteLine("Ban thua");
		}
		else {
			if (may_chon == 2)
				Console.WriteLine("Ban thang");
			else
				Console.WriteLine("Ban thua");	
		}
	}
	// ------------------------------------------------------------------------------------------------------
}