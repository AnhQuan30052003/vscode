using System;

namespace Lab2 {
    class Point {
        // Các thuộc tính
        int x, y;

        // Khơi tạo không tham số
        public Point() { x = 0; y = 0; }

        // Khởi tạo có tham số
        public Point(int x, int y) { this.x = x; this.y = y; }

        // Xuất tọa độ
        public void ToaDo() { Console.WriteLine($"({x},{y})"); }

        // Tính khoảng cách
        public static float TinhKhoangCach(Point a, Point b) {
            return (float) (Math.Sqrt(Math.Pow((a.x - b.x),2) + Math.Pow((a.y - b.y),2)));
        }
    }
}