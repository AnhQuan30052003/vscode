using System;

namespace Lab2 {
    class String {

        // Các thuộc tính
        int x, y;
        string s;

        // Khởi tạo không tham số
        public String() {
            x = 10;
            y = 3;
            s = "C# Programming";
        }

        // Khởi tạo có tham số
        public String(string s, int x, int y) {
            this.s = s;
            this.x = x;
            this.y = y;
        }

        // Hàm hiển thị chuỗi tại tọa độ x,y
        public void HienThi() {
            Console.Clear();
            Console.CursorLeft = x;
            Console.CursorTop = y;
            Console.BackgroundColor = ConsoleColor.Blue;
            Console.ForegroundColor = ConsoleColor.White;
            Console.CursorVisible = false;
            Console.Write(s);
        }

        // Hàm chuyển động chuỗi
        public void ChuyenDong() {
            while (true) {
                HienThi();
                ConsoleKeyInfo phim = Console.ReadKey(true);
                if (phim.Key == ConsoleKey.Escape) {
                    Console.BackgroundColor = ConsoleColor.Black;
                    Console.CursorVisible = true;
                    return;
                }
                if (phim.Key == ConsoleKey.LeftArrow) x -= 1;
                else if (phim.Key == ConsoleKey.RightArrow) x += 1;
                else if (phim.Key == ConsoleKey.UpArrow) y -= 1;
                else if (phim.Key == ConsoleKey.DownArrow) y += 1;

                // Xủ lý khi chạm biên
                if (x <= 0) x = Console.WindowWidth;
                if (x > Console.WindowWidth) x = 0;
                if (y <= 0) y = Console.WindowHeight;
                if (y > Console.WindowHeight) y = 0;
            }
        }
    }
}