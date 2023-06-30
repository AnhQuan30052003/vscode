using System;
using System.Text;

namespace Lab2 {
    class Program {
        static void Main() {
            Console.InputEncoding = Encoding.Unicode;
            Console.OutputEncoding = Encoding.Unicode;

            int a = 1;
            byte x;
            while (a <= 4) {
                // Lấy lựa chọn xem bài
                do {
                    Console.Clear();
                    Console.Write("Danh sách bài tập (1,2,3,4): ");
                } while (!Byte.TryParse(Console.ReadLine(), out x) || x < 1 || x > 4);

                // Cho xem lựa chọn
                if (x == 1) Bai2_1();
                else if (x == 2) Bai2_2();
                else if (x == 3) Bai2_3();
                else if (x == 4) Bai2_4();
                ++a;
                Console.ReadKey(true);
            }
        }

        static void Bai2_1() {
            Point a = new Point();  // Khởi tạo điểm mặc định (0,0)
            Console.WriteLine("Nhập tọa độ một điểm:");
            Console.Write("x = ");
            int x = Convert.ToInt32(Console.ReadLine());
            Console.Write("y = ");
            int y = Convert.ToInt32(Console.ReadLine());

            Point b = new Point(x,y);
            Console.WriteLine("Tọa độ 2 điểm là:");
            a.ToaDo();
            b.ToaDo();
            Console.WriteLine($"Khoảng cách giữa 2 điểm: {Point.TinhKhoangCach(a,b)}");
        }

        static void Bai2_2() {
            // Khởi tạo, xuất chu vi & diện tích đường tròn mặc định
            Circle a = new Circle();
            Console.WriteLine($"Chu vi đường tròn: {a.GetPerimeter()} . Diện tích đường tròn: {a.GetArea()}");

            // Cập nhật radius
            Console.Write("Nhập giá trị bán kính mới: ");
            float new_r = Convert.ToSingle(Console.ReadLine());
            a.SetRadius(new_r);
            Console.WriteLine($"Chu vi đường tròn: {a.GetPerimeter()} . Diện tích đường tròn: {a.GetArea()}");

            // Tạo một đường tròn mới với bán kính mới
            Console.Write("Nhập bán kính đường tròn: ");
            float bk = Convert.ToSingle(Console.ReadLine());
            Circle b = new Circle(bk);
            Console.WriteLine($"Chu vi: {b.GetPerimeter()} .Dien tich: {b.GetArea()}");

        }
    
        static void Bai2_3() {
            String s = new String("Anh Quan", 10, 10);
            s.ChuyenDong();
        }
    
        static void Bai2_4() {
            Adult a = new Adult();
            a.NhapThongTin();
            a.ChiSoBMI();
            a.DieuChinh();   
        }
    }
}