using System;
using System.Text;
using BTH5;

class Program {
    static void Main() {
        Console.InputEncoding = Encoding.Unicode;
        Console.OutputEncoding = Encoding.Unicode;
        byte so_lan_xem = 1;
        while (so_lan_xem <= 2) {
            byte lua_chon;
            do
            {
                Console.Clear();
                Console.Write("Lựa chọn xem bài: [1,2]: ");
            } while (!byte.TryParse(Console.ReadLine(), out lua_chon) || lua_chon < 1 || lua_chon > 2);
            
            switch (lua_chon) {
                case 1:
                    Bai_01();
                    break;
                case 2:
                    Bai_02();
                    break;
            }
            so_lan_xem += 1;
            Console.ReadKey(true);
        }
    }

    static void Bai_01() {
        List_Rectangle ls = new List_Rectangle();
        Console.Clear();
        Console.WriteLine("Danh sách hình chữ nhật đã nhập:");
        ls.Xuat_List();

        Console.WriteLine("\nDanh sách sau khi sắp xếp:");
        ls.SapXep();
        ls.Xuat_List();

        Console.WriteLine();
        ls.XoaHinhChuNhatDauTien();
        Console.WriteLine("Danh sách sau khi xóa:");
        ls.Xuat_List();

        Console.WriteLine();
        ls.Chen();
        Console.WriteLine("\nDanh sách sau khi chèn:");
        ls.Xuat_List();
    }
    
    static void Bai_02() {
        ListNews ls = new ListNews();
        while (true) {
            byte choose;
            do {
                Console.Clear();
                Console.WriteLine("1. Insett news.");
                Console.WriteLine("2. View list news.");
                Console.WriteLine("3. Average rate.");
                Console.WriteLine("4. Exit");
                Console.Write("Choose: ");
            } while (!byte.TryParse(Console.ReadLine(), out choose) || choose < 1 || choose > 4);

            Console.Clear();
            switch (choose) {
                case 1:
                    ls.Insert_News();
                    break;
                case 2:
                    ls.Output();
                    Console.ReadKey(true);
                    break;
                case 3:
                    ls.AverageRate();
                    Console.ReadKey(true);
                    break;
                case 4:
                    return;
            }
        }
    }
}