using System;
namespace ThucHanh4 {
    class Pixel {
        int x, y;
        
        public Pixel() => x = y = 0;

        public Pixel(int x = 0, int y = 0) {
            this.x = x;
            this.y = y;
        }

        public void Xuat() {
            Console.CursorTop = y;
            Console.CursorLeft = x;
            Console.WriteLine("O");
        }
    }

    class ColoredPixel : Pixel {
        int mau_sac;
        
        public ColoredPixel():base() => mau_sac = 2;

        public ColoredPixel(int x = 0, int y = 0, int mau_sac = 2):base(x, y) => this.mau_sac = mau_sac;

        public new void Xuat() {
            Console.ForegroundColor = (ConsoleColor) mau_sac;
            base.Xuat();
            Console.ForegroundColor = (ConsoleColor) 7;
        }
    }

    class Shape {
        string? ten;

        public Shape() => ten = "";

        public Shape(string ten = "") => this.ten = ten;

        public virtual void Nhap() {
            Console.Write("Nhap ten hinh: ");
            ten = Console.ReadLine();
        }

        public string Ten {get => ten; set => ten = value;}
        public virtual float TinhChuVi() => 0;
        public virtual float TinhDienTich() => 0;
        public virtual void Xuat() => Console.WriteLine($"Ten: {ten} - Chu vi: {TinhChuVi()} - Dien tich: {TinhDienTich()}");
    }

    class Triangle : Shape {
        int a, b, c;
        public Triangle():base() => a = b = c = 1;

        public Triangle(string ten = "", int a = 1, int b = 1, int c = 1):base(ten) {
            this.a = a;
            this.b = b;
            this.c = c;
        }

        public override void Nhap() {
            base.Nhap();
            Console.Write("Nhap chieu dai canh thu 1: ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhap chieu dai canh thu 2: ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhap chieu dai canh thu 3: ");
            c = Convert.ToInt32(Console.ReadLine());
        }

        public override float TinhChuVi() => a + b + c;

        public override float TinhDienTich() {
            float p = TinhChuVi()/2;
            return (float) Math.Sqrt(p * (p - a) * (p - b) * (p - c));
        }
    }

    class Rectangle : Shape {
        int chieu_dai, chieu_rong;

        public Rectangle():base() => chieu_dai = chieu_rong = 0;

        public Rectangle(string ten = "", int chieu_dai = 1, int chieu_rong = 2):base(ten) {
            this.chieu_dai = chieu_dai;
            this.chieu_rong = chieu_rong;
        }

        public override void Nhap() {
            base.Nhap();
            Console.Write("Nhap chieu dai: ");
            chieu_dai = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhap chieu rong: ");
            chieu_rong = Convert.ToInt32(Console.ReadLine());
        }

        public override float TinhChuVi() => (float) ((chieu_dai + chieu_rong)*2);

        public override float TinhDienTich() => (float) (chieu_dai * chieu_rong);
    }

    abstract class MayTinh {
        protected string? nhan_hieu;
        protected int ram, bo_nho;
        protected float gia_nhap;

        public MayTinh() {
            nhan_hieu = "";
            ram = bo_nho = 0;
            gia_nhap = 0;
        }

        public MayTinh(string nhan_hieu = "", int ram = 0, int bo_nho = 0, float gia_nhap = 0F) {
            this.nhan_hieu = nhan_hieu;
            this.ram = ram;
            this.bo_nho = bo_nho;
            this.gia_nhap = gia_nhap;
        }

        public abstract void Nhap();
        public abstract float TinhGiaBan();

        public virtual void XuatThongTin() => Console.WriteLine("Nhãn hiệu: {0}, Ram: {1}, Bộ nhớ: {2}, Giá bán: {3}", nhan_hieu, ram, bo_nho, TinhGiaBan());
    }

    class Laptop : MayTinh {
        float trong_luong;

        public Laptop():base() => trong_luong = 0F;

        public Laptop(string nhan_hieu = "", int ram = 0, int bo_nho = 0, float gia_nhap = 0, float trong_luong = 0):base(nhan_hieu, ram, bo_nho, gia_nhap) => this.trong_luong = trong_luong;

        public override void Nhap() {
            Console.Write("Nhập Nhãn hiệu: ");
            nhan_hieu = Console.ReadLine();
            Console.Write("Nhập RAM: ");
            ram = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập Bộ nhớ: ");
            bo_nho = Convert.ToInt32(Console.ReadLine());
            Console.Write("Giá nhập: ");
            gia_nhap = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập Trọng lượng: ");
            trong_luong = Convert.ToSingle(Console.ReadLine());
        }
        public override float TinhGiaBan() {
            if (trong_luong >= 2) return (float) (1.15F * gia_nhap);
            return (float) (1.2F * gia_nhap);
        }
    }

    class MacBook : MayTinh {
        int thuoc_tinh;

        public MacBook():base() => thuoc_tinh = 1;

        public MacBook(string nhan_hieu = "", int ram = 0, int bo_nho = 0, float gia_nhap = 0, int thuoc_tinh = 1):base(nhan_hieu, ram, bo_nho, gia_nhap) => this.thuoc_tinh = thuoc_tinh;

        public override void Nhap() {
            Console.Write("Nhập thuộc tính <1:MacBook Air | 2:MacBook Pro 13 inch | 3:MacBook Pro 16 inch>: ");
            thuoc_tinh = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập nhãn hiệu: ");
            nhan_hieu = Console.ReadLine();
            Console.Write("Nhập RAM: ");
            ram = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập bộ nhớ: ");
            bo_nho = Convert.ToInt32(Console.ReadLine());
            Console.Write("Giá nhập: ");
            gia_nhap = Convert.ToInt32(Console.ReadLine());
        }

        public override float TinhGiaBan() {
            if (thuoc_tinh == 1) return (float) (1.5F *gia_nhap);
            else if (thuoc_tinh == 2) return (float) (1.8F * gia_nhap);
            else return (float) (2 * gia_nhap);
        }
    }
}