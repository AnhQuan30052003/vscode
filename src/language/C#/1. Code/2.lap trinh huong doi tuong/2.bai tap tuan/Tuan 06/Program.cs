using System;
using System.Text;
using BaiTapTuan6;

class Program {
    static void Main() {
        Console.InputEncoding = Encoding.Unicode;
        Console.OutputEncoding = Encoding.Unicode;
        Console.Clear();
        LopHoc cntt = new LopHoc();
        cntt.NhapDanhSach();

        Console.Clear();
        Console.WriteLine("Danh sách sinh viên đã nhập:");
        cntt.XuatDanhSach();
        Console.ReadKey(true);

        Console.Clear();
        Console.WriteLine("Danh sách sinh viên tốt nghiệp:");
        cntt.SinhVienTotNghiep();
        Console.ReadKey(true);

        Console.Clear();
        Console.WriteLine("Danh sách sinh viên sắp xếp giảm dần theo DTB");
        cntt.SapXepGiamDan();
        cntt.XuatDanhSach();
        Console.ReadKey(true);
    }
}