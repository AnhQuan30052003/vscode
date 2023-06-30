namespace BTH5 {
    // Lớp Shape
    class Shape {
        private string? ten;
        public Shape(string ten = "") => this.ten = ten;
        public virtual float TinhChuVi() => 0;
        public virtual float TinhDienTich() => 0;
        public void Xuat() => Console.WriteLine(String.Format("Tên hình: {0}, Chu vi: {1:f2}, Diện tích: {2:f2}", ten, TinhChuVi(), TinhDienTich()));
    }

    // Lớp giao diện IPanit
    interface IPanit { float Gia(int c); }

    // Lớp Rectangle
    class Rectangle:Shape, IPanit, IComparable<Rectangle> {
        private float d, r;
        public Rectangle():base() => d = r = 1;
        public Rectangle(float d = 1, float r = 1, string ten = "Rectangle"):base(ten) {
            this.d = d;
            this.r = r;
        }

        public override float TinhChuVi() => (d+r)/2;
        public override float TinhDienTich() => d*r;
        public float Gia(int c) => c * TinhDienTich();
        public int CompareTo(Rectangle rec) {
            int c = 10;
            if (Gia(c) > rec.Gia(c)) return 1;
            else if (Gia(c) < rec.Gia(c)) return -1;
            else return 0;
        }
    }

    // Lớp list của Rectangle
    class List_Rectangle {
        private int n;
        private List<Rectangle> ls;

        public List_Rectangle() {
            byte n;
            do {
                Console.Clear();
                Console.Write("Nhập số lượng hình chữ nhật: ");
            } while (!byte.TryParse(Console.ReadLine(), out n) || n < 2 || n > 10);

            ls = new List<Rectangle>(n);
            for (byte i = 1; i <= n; i++) {
                Console.Clear();
                Console.WriteLine("Nhập hình thứ: {0}", i);
                Console.Write("Chiều dài: ");
                float d = Convert.ToSingle(Console.ReadLine());
                Console.Write("Chiều rộng: ");
                float r = Convert.ToSingle(Console.ReadLine());
                ls.Add(new Rectangle(d, r));
            }
        }

        public void Xuat_List() {
            foreach (Rectangle r in ls) {
                r.Xuat();
            }
        }

        public void SapXep() => ls.Sort();

        public void XoaHinhChuNhatDauTien() {
            Console.Write("Nhập diện tích x cần xóa: ");
            float x = Convert.ToSingle(Console.ReadLine());
            foreach (Rectangle rec in ls) {
                if (rec.TinhDienTich() < x) {
                    ls.Remove(rec);
                    break;
                }
            }
        }

        public void Chen() {
            Console.Write("Nhập vị trí cần chèn: ");
            int vt = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Nhập hình chữ nhật cần thêm:");
            Console.Write("Chiều dài: ");
            float d = Convert.ToSingle(Console.ReadLine());
            Console.Write("Chiều rộng: ");
            float r = Convert.ToSingle(Console.ReadLine());
            if (vt <= 0) vt = 0;
            else if (vt >= ls.Count) vt = ls.Count;
            ls.Insert(vt, new Rectangle(d, r));
        }
    }
}