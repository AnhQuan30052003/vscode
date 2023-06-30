using System;

namespace BaiTapTuan4 {
    class Program {
        static void Main() {
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
                        Bai_01();
                        break;
                    case 2:
                        Bai_02();
                        break;
                    case 3:
                        Bai_03();
                        break;
                    case 4:
                        Bai_04();
                        break;
                    case 5:
                        Bai_05();
                        break;
                }
                ++so_lan_xem;
                Console.ReadKey();
            }
        }
        
        static void Bai_01() {
            ThongTinSinhVien sv = new ThongTinSinhVien();
            sv.Nhap();
            sv.Xuat();
        }

        static void Bai_02() {
            DayDonDieu day = new DayDonDieu();
            day.Nhap();
            day.Xuat();
        }

        static void Bai_03() {
            PhepToan pt = new PhepToan();
            pt.Nhap();
            pt.Xuat();
        }

        static void Bai_04() {
            LoaiKyTu kt = new LoaiKyTu();
            kt.Nhap();
            kt.Xuat();
        }

        static void Bai_05() {
            Mang m = new Mang();
            m.Nhap();
            m.SapXepVaIn();
            m.XuatPhanTuAm();
        }
    }
}