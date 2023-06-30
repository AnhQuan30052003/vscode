using System;

namespace BaiTapTuan4 {
    class ThongTinSinhVien {
        string? ho_ten;
        DateTime ngay_sinh;
        bool gioi_tinh;

        public void Nhap() {
            Console.Write("Nhap ho ten: ");
            ho_ten = Console.ReadLine();

            Console.Write("Nhap ngay sinh (mm/dd/yyyy): ");
            ngay_sinh = Convert.ToDateTime(Console.ReadLine());

            Console.Write("Nhap gioi tinh (Nam:true | Nu:false): ");
            gioi_tinh = Convert.ToBoolean(Console.ReadLine());
        }

        public void Xuat() {
            if (gioi_tinh == true)
                Console.Write($"{ho_ten} {ngay_sinh.ToShortDateString()} Nam");
            else
                Console.Write($"{ho_ten} {ngay_sinh.ToShortDateString()} Nu");
        }
    }

    class DayDonDieu {
        int a, b, c;
        public void Nhap() {
            Console.Write("Nhap a: ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhap b: ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhap c: ");
            c = Convert.ToChar(Console.Read());
        }
        string SoSanh() {
            if (a <= b && b <= c)
                return "increasing";
            else if (a >= b && b >= c)
                return "decreasing";
            else
                return "increasing nor decreasing order";
        }

        public void Xuat() {
            Console.Write(SoSanh());
        }
    }

    class PhepToan {
        float a, b;
        char c;

        public void Nhap() {
            Console.Write("Nhap so thuc a = ");
            a = Convert.ToSingle(Console.ReadLine());

            Console.Write("Nhap so thuc b = ");
            b = Convert.ToSingle(Console.ReadLine());

            Console.Write("Nhap phep toan (+,-,*,/): ");
            c = Convert.ToChar(Console.Read());
        }

        float TinhToan() {
            float ket_qua = 0;
            switch (c) {
                case '+':
                    ket_qua = a + b;
                    break;
                case '-':
                    ket_qua = a - b;
                    break;
                case '*':
                    ket_qua = a * b;
                    break;
                case '/':
                    ket_qua = a / b;
                    break;
            }
            return ket_qua;
        }

        public void Xuat() {
            Console.WriteLine($"{a} {c} {b} = {TinhToan()}");
        }
    }

    class LoaiKyTu {
        char c;
        public void Nhap() {
            do {
                Console.Clear();
                Console.Write("Nhap 1 ki tu: ");
            } while (!(char.TryParse(Console.ReadLine(), out c)));
        }

        bool NguyenAm() {
            switch (c) {
                case 'u': case 'e': case 'o': case 'a': case 'i':
                case 'U': case 'E': case 'O': case 'A': case 'I':
                    return true;
                default:
                    return false;
            }
        }

        public void Xuat() {
            if (NguyenAm())
                Console.Write($"{c} la nguyen am");
            else
                Console.Write($"{c} la phu am");
        }
    }

    class Mang {
        short n;
        float[] a = new float[100];
        
        public void Nhap() {
            do {
                Console.Clear();
                Console.Write("Nhap kich thuoc mang: ");
            } while (!(short.TryParse(Console.ReadLine(), out n) && n >= 3 && n <= 20));

            a = new float[n];
            Console.WriteLine($"Nhap {n} phan tu cua mang:");
            for (int i = 0; i < n; i++) {
                a[i] = Convert.ToSingle(Console.ReadLine());
            }
        }

        public void SapXepVaIn() {
            Array.Sort(a);
            Console.Write("Mang duoc xep theo thu tu tang dan: ");
            foreach (int x in a) {
                Console.Write("{0} ", x);
            }
            Console.WriteLine();
        }

        int DemPhanTuAm() {
            int dem = 0;
            for (int i = 0; i < a.Length; i++) {
                if (a[i] < 0)
                    ++dem;
            }
            return dem;
        }

        public void XuatPhanTuAm() {
            Console.Write($"So phan tu am trong mang: {DemPhanTuAm()}");
        }
    }
}