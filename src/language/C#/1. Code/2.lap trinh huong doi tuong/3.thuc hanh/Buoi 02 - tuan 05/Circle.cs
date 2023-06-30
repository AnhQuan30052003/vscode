using System;

namespace Lab2 {
    class Circle {
        // Các thuộc tính
        float radius;

        // Khơi tạo không tham số
        public Circle() { radius = 1F; }

        // Khỏi tạo có tham số
        public Circle(float radius) { this.radius = radius; }

        // Trả về giá trị đường tròn
        public float GetRadius() { return radius; }

        // Gán giá trị đường tròn bằng một biến khác nhập vào
        public void SetRadius(float radius) { this.radius = radius; }

        // Tính chu vi đường tròn
        public double GetPerimeter() { return radius * 2 * 3.14F; }

        // Tính diện tích đường tròn
        public double GetArea() { return 3.14F * radius * radius; }
    }
}