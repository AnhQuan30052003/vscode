using System;
using System.Text;
using QuanLy;

class Program {
    // Hàm xóa học viên có sô tiết học = 0
    static void Xoa(ref HocVien[] a, ref int n) {
        HocVien[] b = a;
        a = new HocVien[n];

        int k = 0;
        for (int i = 0; i < n; i++) {
            if (b[i].Sth() > 0) {
                a[k++] = b[i];
            }
        }
        n = k;
    }

    // Hàm thêm học viên vào sanh sách khóa học
    static void ThemHocVien(ref HocVien[] a, ref int n, HocVien t, int vt) {
        if (vt == 1) {
            for (int i = n; i > 0; i--) {
                a[i] = a[i-1];
            }
            a[0] = t;
            n += 1;
        }
        else {
            n += 1;
            a[n-1] = t;
        }
    }
    static void Main() {
        Console.InputEncoding = Encoding.Unicode;
        Console.OutputEncoding = Encoding.Unicode;

        HocVien[] a = new HocVien[100];
        int n;
        do {
            Console.Clear();
            Console.Write("Nhập số học viên: ");
            n = Convert.ToInt32(Console.ReadLine());
        } while (n <= 2 || n >= 30);

        // Nhập thông tin cho học viên
        for (int i = 0; i < n; i++) {
            a[i] = new HocVien();
            Console.Clear();
            Console.WriteLine("Nhập thông tin sinh viên thứ {0}", i+1);
            a[i].Nhap();
        }

        // Xuất danh sách học viên vừa nhập
        Console.Clear();
        Console.WriteLine("Danh sách các học viên đã nhập:");
        for (int i = 0; i < n; i++) {
            a[i].Xuat();
        }
        Console.ReadKey(true);

        // Thêm một học viên vào danh sách
        Console.Clear();
        Console.WriteLine("Nhập vị trí học viên muốn thêm vào danh sách:");
        Console.Write("1: Đầu | 2: Cuối: ");
        int vt = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Nhập thông tin học viên:");
        HocVien t = new HocVien();
        t.Nhap();
        ThemHocVien(ref a, ref n, t, vt);
        Console.Clear();
        Console.WriteLine("Danh sách sau khi thêm:");
        for (int i = 0; i < n; i++) {
            a[i].Xuat();
        }
        Console.ReadKey(true);

        // Xóa học viên có số tiết học = 0
        Xoa(ref a, ref n);
        Console.Clear();
        Console.WriteLine("Danh sách các học viên có số tiết học lớn hơn 0:");
        for (int i = 0; i < n; i++) {
            a[i].Xuat();
        }

        // Tổng tiền học phí toàn bộ học viên
        float tong = 0;
        for (byte i = 0; i < n; i++) {
            tong += a[i].TienHocPhi();
        }
        Console.Write($"\nTổng học phí các sinh viên: {tong}");
    }
}