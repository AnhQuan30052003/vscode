namespace BaiThucHanh3 {
    class Time {
        byte gio, phut, giay;
        bool ngay = true;

        // Hàm Khởi tạo
        public Time() { gio = phut = giay = 0; }
        public Time(byte gio = 0, byte phut = 0, byte giay = 0) {
            this.gio = gio;
            this.phut = phut;
            this.giay = giay;
        }

        // Xuất đồng hồ 24g
        public void Show24() {
            if (gio < 10) Console.Write($"0{gio}:");
            else Console.Write($"{gio}:");

            if (phut < 10) Console.Write($"0{phut}:");
            else Console.Write($"{phut}:");

            if (giay < 10) Console.WriteLine($"0{giay}");
            else  Console.WriteLine($"{giay}");
        }

        // Xuất đồng hồ 12g
        public void Show12() {
            byte gio_tam = (byte) (gio % 12);
            if (gio_tam < 10) Console.Write($"0{gio_tam}:");
            else Console.Write($"{gio_tam}:");

            if (phut < 10) Console.Write($"0{phut}:");
            else Console.Write($"{phut}:");

            if (giay < 10) Console.Write($"0{giay}: ");
            else  Console.Write($"{giay}: ");

            if (gio <= 11) Console.WriteLine("AM");
            else Console.WriteLine("PM");
        } 

        // Tăng thời gian thêm n phút
        public static Time operator +(Time t, byte phut_them) {
            int x = t.phut + phut_them;
            if (x < 60) {
                t.phut = (byte) x;
            }
            else {
                t.phut = (byte) (x % 60);
                t.gio = (byte) (t.gio + x/60);
                if (t.gio >= 24) t.gio = (byte) (t.gio % 24);
            }
            return t;
        }

        // Tăng thời gian thêm 1 giây
        public static Time operator ++(Time t) {
            t.giay += 1;
            if (t.giay >= 60) {
                t.giay = 0;
                t.phut += 1;
                if (t.phut >= 60)
                t.phut = (byte) (t.phut % 60);
                if (t.gio >= 24) t.gio = (byte) (t.gio % 24);
            }
            return t;
        }
    }
}