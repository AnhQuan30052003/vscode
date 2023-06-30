using System;

namespace Lab2 {
    class Adult {

        // Các thuộc tính
        string? ho_ten;
        float can_nang, chieu_cao;

        // Khởi tạo có tham số
        public Adult(string ho_ten = "Nguyễn Anh Quân", float can_nang = 55F, float chieu_cao = 1.72F) {
            this.ho_ten = ho_ten;
            this.can_nang = can_nang;
            this.chieu_cao = chieu_cao;
        }

        // Khởi tạo sao chép
        public Adult(Adult a) {
            this.ho_ten = a.ho_ten;
            this.can_nang = a.can_nang;
            this.chieu_cao = a.chieu_cao;
        }

        public void NhapThongTin() {
            Console.Write("Nhập họ tên của bạn: ");
            ho_ten = Console.ReadLine();

            Console.Write("Chiều cao (m): ");
            chieu_cao = Convert.ToSingle(Console.ReadLine());

            Console.Write("Cân nặng (kg): ");
            can_nang = Convert.ToSingle(Console.ReadLine());            
        }

        // Tính chỉ sối BMI
        float BMI() {
            return (float) (can_nang / Math.Pow(chieu_cao,2));
        }

        // Xuất chỉ số
        public void ChiSoBMI() {
            float x = BMI();
            Console.WriteLine("\nKết quả kiểm tra:");
            Console.WriteLine($" + Chỉ số sức khỏe (BMI) của {ho_ten} là: {x}.");
            Console.Write(" + Điều đó cho biết: ");
            if (x < 18.5) Console.WriteLine("bạn đang thiếu cân.");
            else if (x <= 25) Console.Write("bạn có chỉ số tốt !");
            else if (x < 30) Console.WriteLine("bạn đang thừa cân.");
            else Console.WriteLine("bạn đang béo phì.");
        }

        public void DieuChinh() {
            if (BMI() >= 18.5 && BMI() <= 25) return;
            else {
                if (BMI() < 18.5)
                    Console.Write(" -> Bạn cần tăng thêm: {0} kg.", (float) (18.5F * Math.Pow(chieu_cao, 2) - can_nang));
                else
                    Console.Write(" -> Bạn cần giảm đi: {0} kg.", (float) (can_nang - 25 * Math.Pow(chieu_cao, 2)));
            }
        }
    }
}