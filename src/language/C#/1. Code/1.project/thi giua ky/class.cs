namespace ThiGiuaKy {
    class HoaDonKhachSan {
        string ? cccd, ho_ten;
        int loai_phong;
        DateTime ngay_den, ngay_di;
        static int gia_san = 275;

        public HoaDonKhachSan() {
            cccd = "123";
            ho_ten = "";
            loai_phong = 1;
            ngay_den = DateTime.Now;
            ngay_di = DateTime.Now;
        }

        public HoaDonKhachSan(string cccd, string ho_ten, DateTime ngay_den, DateTime ngay_di, int loai_phong) {
            this.cccd = cccd;
            this.ho_ten = ho_ten;
            this.ngay_den = ngay_den;
            this.ngay_di = ngay_di;
            this.loai_phong = loai_phong;
        }

        public void Nhap() {
            Console.Write("Nhập CCCD: ");
            cccd = Console.ReadLine();
            Console.Write("Nhập họ tên: ");
            ho_ten = Console.ReadLine();
            Console.Write("Nhập ngày đến: ");
            ngay_den = Convert.ToDateTime(Console.ReadLine());
            Console.Write("Nhập ngày đi: ");
            ngay_di = Convert.ToDateTime(Console.ReadLine());
            Console.Write("Nhập loại phòng: ");
            loai_phong = Convert.ToInt32(Console.ReadLine());
        }

        public float TinhTienPhong() {
            int ngay_o = (ngay_di - ngay_den).Days;
            if (ngay_o == 0) ngay_o = 1;
            float gia_phong;
            if (loai_phong == 1) gia_phong = 1.5F * gia_san;
            else gia_phong = gia_san;
            return ngay_o * gia_phong + 0.1F * (ngay_o * gia_phong);
        }

        public void Xuat() {
            Console.WriteLine($"CCCD: {cccd} - Ho ten: {ho_ten} - So ngay o: {(ngay_di - ngay_den).Days} - Loai phong: {loai_phong} - Tien phong: {TinhTienPhong()}");
        }

        public static float operator +(HoaDonKhachSan a, float tien) {
            return a.TinhTienPhong() + tien;
        }

        public static bool operator < (HoaDonKhachSan a, HoaDonKhachSan b) {
            return a.NgayDen < b.NgayDen;
        }

        public static bool operator > (HoaDonKhachSan a, HoaDonKhachSan b) {
            return a.NgayDen > b.NgayDen;
        }

        public int LoaiPhong { get => loai_phong; set => loai_phong = value; }

        public DateTime NgayDen { get => ngay_den; set => ngay_den = value; }
    }
}