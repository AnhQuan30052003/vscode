using System;

class Program {
  static void Main() {
    Console.Clear();
    
    TraiCay tao = new TraiCay("Quả táo", new ThongTin("Đỏ", 12_000));
    Console.WriteLine(tao.ten);
    Console.WriteLine(tao.thongTin.mauSac);
    Console.WriteLine(tao.thongTin.gia);
  }
}