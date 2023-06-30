using System;
using System.Text;
using ThiGiuaKy;

class Program {
    static void Main() {
        int n;
        do {
            Console.Clear();
            Console.Write("Nhập số hóa đơn: ");
        } while (!int.TryParse(Console.ReadLine(), out n) || n < 2 || n > 30);
        HoaDonKhachSan[] hd = new HoaDonKhachSan[n];

        for (int i = 0; i < n; i++) {
            Console.Clear();
            Console.WriteLine("Nhập hóa đơn thứ {0}:", i+1);
            hd[i] = new HoaDonKhachSan();
            hd[i].Nhap();
        }

        Console.Clear();
        float tien_trung_binh = 0F;
        int so_hoa_don_loai_thuong = 0;
        for (int i = 0; i < n; i++) {
            tien_trung_binh = hd[i] + tien_trung_binh;
            if (hd[i].LoaiPhong == 0)
                so_hoa_don_loai_thuong += 1;
        }
        Console.WriteLine("Hóa đơn trung bình của {0} phòng là: {1}", n, tien_trung_binh/n);
        Console.WriteLine("Số hóa đơn phòng loại thường là: {0}", so_hoa_don_loai_thuong);

        HoaDonKhachSan x = new HoaDonKhachSan();
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (hd[i] < hd[j]) {
                    x = hd[i];
                    hd[i] = hd[j];
                    hd[j] = x;
                }
            }
        }

        Console.WriteLine("Hóa đơn được sắp xếp theo chiều giảm dần ngày đến:");
        for (int i = 0; i < n; i++) {
            hd[i].Xuat();
        }
        Console.ReadKey(true);
    }
}