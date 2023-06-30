namespace BaiThucHanh3 {
    class PhanSo {
        int tu, mau;

        // Hàm khởi tạo
        public PhanSo() { tu = 0; mau = 1; }
        public PhanSo(int tu = 0, int mau = 1) { this.tu = tu; this.mau = mau; }

        public PhanSo(PhanSo p) { this.tu = p.tu; this.mau = p.mau; }

        // Toán tử '+'
        public static PhanSo operator +(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo();
            if (a.mau == b.mau) {
                c.tu = a.tu + b.tu;
                c.mau = a.mau;
            }
            else {
                c.tu = a.tu * b.mau + b.tu * a.mau;
                c.mau = a.mau * b.mau;
            }
            return c;
        }

        // Toán tử '-'
        public static PhanSo operator -(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo();
            if (a.mau == b.mau) {
                c.tu = a.tu - b.tu;
                c.mau = a.mau;
            }
            else {
                c.tu = a.tu * b.mau - b.tu * a.mau;
                c.mau = a.mau * b.mau;
            }
            return c;
        }

        // Toán tử '*'
        public static PhanSo operator *(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo();
            c.tu = a.tu * b.tu;
            c.mau = a.mau * b.mau;
            return c;
        }

        // Toán tử '/'
        public static PhanSo operator /(PhanSo a, PhanSo b) {
            PhanSo c = new PhanSo();
            c.tu = a.tu * b.mau;
            c.mau = a.mau * b.tu;
            return c;
        }
    
        // Hàm rút gọn
        public PhanSo RutGon() {
            if (tu > 0 && mau > 0) {
                int _tu = tu, _mau = mau;
                while (_tu != _mau) {
                    if (_tu > _mau) _tu -= _mau;
                    else _mau -= _tu;
                }
                tu /= _tu;
                mau /= _tu;
            }
            return this;
        }

        // Hàm xuất
        public void Xuat() {
            Console.WriteLine($"{tu}/{mau}");
        }
    }
}