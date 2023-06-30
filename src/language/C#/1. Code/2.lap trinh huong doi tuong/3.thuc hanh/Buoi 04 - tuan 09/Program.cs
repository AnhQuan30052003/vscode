using System;
using System.Text;
using ThucHanh4;

class Program {
    static void Main() {
        Console.InputEncoding = Encoding.Unicode;
        Console.OutputEncoding = Encoding.Unicode;
        byte so_lan_xem = 1;
        while (so_lan_xem <= 3) {
            byte lua_chon;
            do {
                Console.Clear();
                Console.Write("Chọn bài (1,2,3): ");
            } while (!byte.TryParse(Console.ReadLine(), out lua_chon) || lua_chon < 1 || lua_chon > 3);

            switch (lua_chon) {
                case 1: Bai_01(); break;
                case 2: Bai_02(); break;
                case 3: Bai_03(); break;
            }
            so_lan_xem += 1;
            Console.ReadKey(true);
        }
    }

    static void Bai_01() {
        Console.Clear();
        Pixel p = new Pixel(10, 2);
        p.Xuat();
        Console.ReadKey(true);
        Console.Clear();
        ColoredPixel c = new ColoredPixel(15, 2, 2);
        c.Xuat();
    }

    static void Bai_02() {
        int n;
        do {
            Console.Clear();
            Console.Write("Nhập số hình: ");
        } while (!int.TryParse(Console.ReadLine(), out n) || n < 2 || n > 20);

        Shape[] hinh = new Shape[n];
        for (int i = 0; i < n; i++) {
            Console.Clear();
            Console.Write("Chọn hình thứ {0}: <1:Tam giác | 2:Chữ nhật>: ");
            int lua_chon = Convert.ToInt32(Console.ReadLine());
            if (lua_chon == 1) hinh[i] = new Triangle();
            else hinh[i] = new Rectangle();
            hinh[i].Nhap();
        }

        Console.Clear();
        Console.WriteLine("Thông tin các hình đã nhập:");
        for (int i = 0; i < n; i++) {
            hinh[i].Xuat();
        }

        float dien_tich_trung_binh_hinh_chu_nhat = 0;
        int dem_hinh_chu_nhat = 0;
        for (int i = 0; i < n; i++) {
            if (hinh[i].GetType() == typeof(Rectangle)) {
                dien_tich_trung_binh_hinh_chu_nhat += hinh[i].TinhDienTich();
                dem_hinh_chu_nhat += 1;
            }
        }
        Console.WriteLine("Diện tích trung bình các hình chữ nhật: {0}", dien_tich_trung_binh_hinh_chu_nhat/dem_hinh_chu_nhat);
    }

    static void Bai_03() {
        byte n, chon;
        do {
            Console.Write("Nhập số lượng máy tính (2<=n<=30): ");
        } while (!byte.TryParse(Console.ReadLine(), out n) || n < 2 || n > 30);
        MayTinh[] ds = new MayTinh[n];

        for (byte i = 0; i < n; i++) {
            do {
                Console.Clear();
                Console.WriteLine("Máy tính thứ {0}", i+1);
                Console.Write("Chọn <1:Laptop | 2: Macbook>: ");
            } while (!byte.TryParse(Console.ReadLine(), out chon) || chon < 1 || chon > 2);

            if (chon == 1) ds[i] = new Laptop();
            else ds[i] = new MacBook();
            ds[i].Nhap();
        }

        Console.Clear();
        foreach (MayTinh m in ds) {
            m.XuatThongTin();
        }
    }
}