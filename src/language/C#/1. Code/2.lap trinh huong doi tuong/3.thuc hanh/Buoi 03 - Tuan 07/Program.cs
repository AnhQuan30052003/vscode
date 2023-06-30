using System;
using System.Text;
using BaiThucHanh3;

class Program {
    static void Main() {
        Console.InputEncoding = Encoding.Unicode;
        Console.OutputEncoding = Encoding.Unicode;

        byte bai_xem = 1, lua_chon;
        while (bai_xem <= 3) {
            do {
                Console.Clear();
                Console.Write($"Danh sách bài tập (1,2,3): ");
            } while (!Byte.TryParse(Console.ReadLine(), out lua_chon) || lua_chon < 1 || lua_chon > 3);

            Console.Clear();
            switch (lua_chon) {
                case 1: Bai_1(); break;
                case 2: Bai_2(); break;
                case 3: Bai_3(); break;
            }
            ++bai_xem;
            Console.ReadKey(true);
        }
    }

    static void Bai_1() {
        Console.Write("Nhập giờ: ");
        byte gio = Convert.ToByte(Console.ReadLine());

        Console.Write("Nhập phút: ");
        byte phut = Convert.ToByte(Console.ReadLine());

        Console.Write("Nhập giây: ");
        byte giay = Convert.ToByte(Console.ReadLine());

        Time time = new Time(gio, phut, giay);
        time.Show24();
        time.Show12();

        Console.Write("Nhập số phút muốn tăng thêm: ");
        byte phut_them = Convert.ToByte(Console.ReadLine());
        time += phut_them;    
        time.Show24();
        time.Show12();

        Console.WriteLine("Sau 1 giây nữa thì thời gian là: ");
        time++;
        time.Show24();
        time.Show12();
    }

    static void Bai_2() {
        int ta, ma, tb, mb;
        Console.Write("Phân số thứ 1, tử: ");
        ta = Convert.ToInt32(Console.ReadLine());
        Console.Write("Phân số thứ 1, mẫu: ");
        ma = Convert.ToInt32(Console.ReadLine());
        Console.Write("Phân số thứ 2, tử: ");
        tb = Convert.ToInt32(Console.ReadLine());
        Console.Write("Phân số thứ 2, mẫu: ");
        mb = Convert.ToInt32(Console.ReadLine());

        PhanSo a = new PhanSo(ta, ma);
        PhanSo b = new PhanSo(tb, mb);
        PhanSo c = new PhanSo();

        Console.WriteLine("2 Phân số đã nhập:");
        a.Xuat(); b.Xuat();

        Console.Write("+ Tổng: ");
        c = a + b;
        c.RutGon();
        c.Xuat();

        Console.Write("+ Hiệu: ");
        c = a - b;
        c.RutGon();
        c.Xuat();

        Console.Write("+ Tích: ");
        c = a * b;
        c.RutGon();
        c.Xuat();

        Console.Write("+ Thương: ");
        c = a / b;
        c.RutGon();
        c.Xuat();
    }

    static void Bai_3() {
        SV sv = new SV();
        sv.Nhap();
        sv.XuatThongTinSinhVien();
        sv.HocBong();
    }
}