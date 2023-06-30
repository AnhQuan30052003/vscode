using System;

namespace BaiTapTuan6 {
    class SinhVien {
        string? ten, gioi_tinh;
        int mssv, tc_tich_luy;
        float dtb_tich_luy;
        public static int tong_tin_chi = 145;

        // Nhập các thông tin của sinhh viên
        public void Nhap() {
            while (true) {
                string? ms;
                Console.Write(" + Nhập MSSV: ");
                ms = Console.ReadLine();
                if (int.TryParse(ms, out mssv) && ms[0] != '0' && ms.Length == 8) break;
            }

            while (true) {
                Console.Write(" + Nhập tên: ");
                ten = Console.ReadLine();
                if (ten?.Length < 50 && ten?.Length != 0) break;
            }

            while (true) {
                Console.Write(" + Nhập giới tính: ");
                gioi_tinh = Console.ReadLine();
                if ((gioi_tinh?.ToLower() == "nam" || gioi_tinh?.ToLower() == "nu" || gioi_tinh?.ToLower() == "nữ") && gioi_tinh.Length != 0) break;
            }

            while (true) {
                Console.Write(" + Nhập điểm trung bình tích lũy: ");
                if (float.TryParse(Console.ReadLine(), out dtb_tich_luy) && dtb_tich_luy >= 0 && dtb_tich_luy <= 10) break;
            }

            while (true) {
                Console.Write(" + Nhập số tín chỉ tích lũy: ");
                if (int.TryParse(Console.ReadLine(), out tc_tich_luy) && tc_tich_luy >= 0) break;
            }
        }

        // Lấy giá trị của thuộc tính - truy cập từ bên ngoài
        public float Dtb_tich_luy { get => dtb_tich_luy; set => dtb_tich_luy = value; }
        public int Tc_tich_luy { get => tc_tich_luy; set => tc_tich_luy = value; }

        public void Xuat() {
            Console.WriteLine($"+ {mssv} {ten} {gioi_tinh} {dtb_tich_luy} {tc_tich_luy}");
        }
    }

    class LopHoc {
        string? ten_lop;
        int n;
        SinhVien[] sv = new SinhVien[30];

        // Nhập dữ liệu sinh viên
        public void NhapDanhSach() {
            // Nhập tên lớp học
            Console.Write("Nhập tên lớp: ");
            ten_lop = Console.ReadLine();

            // Nhập số lượng sinh viên của lớp
            do {
                Console.Write("Nhập số lượng sinh viên: ");
            } while (!int.TryParse(Console.ReadLine(), out n) || n < 5 || n > 30);

            // Nhập dữ liệu cho từng sinh viên trong lớp
            Console.Clear();
            Console.WriteLine("Nhập thông tin sinh viên:");
            sv = new SinhVien[n];
            for (int i = 0; i < n; i++) {
                Console.WriteLine(" - Sinh viên thứ {0}:", i+1);
                sv[i] = new SinhVien();
                sv[i].Nhap();
                Console.WriteLine();
            }
        }

        public void XuatDanhSach() {
            for (int i = 0; i < n; i++) {
                sv[i].Xuat();
            }
        }

        public void SinhVienTotNghiep() {
            for (int i = 0; i < n; i++)
                if (sv[i].Dtb_tich_luy >= 5.5F && sv[i].Tc_tich_luy >= SinhVien.tong_tin_chi)
                    sv[i].Xuat();
        }
    
        public void SapXepGiamDan() {
            SinhVien temp = new SinhVien();
            for (int i = 0; i < n-1; i++) {
                for (int j = i+1; j < n; j++) {
                    if (sv[i].Dtb_tich_luy < sv[j].Dtb_tich_luy) {
                        temp = sv[i];
                        sv[i] = sv[j];
                        sv[j] = temp;
                    }
                }
            }
        }
    }
}