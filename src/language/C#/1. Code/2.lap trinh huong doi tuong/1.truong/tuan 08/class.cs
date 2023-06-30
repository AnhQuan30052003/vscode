namespace QuanLy {
    class HocVien {
        string? mssv, ho_ten, lop_hoc;
        int sth;
        static int hoc_phi = 100;

        public HocVien () {
            mssv = "12345678";
            ho_ten = "Nguoi thu nhat";
            sth = 50;
            lop_hoc = "A";
        }

        public void Nhap() {
            Console.Write("Nhập MSSV: ");
            mssv = Console.ReadLine();
            Console.Write("Nhập họ và tên: ");
            ho_ten = Console.ReadLine();
            Console.Write("Nhập số tiết học: ");
            sth = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập tên lớp học: ");
            lop_hoc = Console.ReadLine();
        }

        public int Sth() {
            return sth;
        }

        public float TienHocPhi() {
            float tien_giam = 0F;
            if (sth > 50) tien_giam = 0.15F * (sth * hoc_phi);
            else if (sth > 30) tien_giam = 0.1F * (sth * hoc_phi);
            return sth * hoc_phi - tien_giam;
        }

        public void Xuat() {
            Console.WriteLine($"Ten: {ho_ten}, Lop hoc: {lop_hoc}, So tiet: {sth}, Tien hoc phi: {TienHocPhi()}");
        }

        public static float operator +(HocVien a, float so) {
            return a.TienHocPhi() + so;
        }
    }
}