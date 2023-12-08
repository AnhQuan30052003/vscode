public class NhanVien {
    private String ten;
    private int tuoi;
    private String diaChi;
    private double luong;
    private int tongSoGioLam;

    // Constructor không tham số
    public NhanVien() {
    }

    // Constructor đầy đủ tham số
    public NhanVien(String ten, int tuoi, String diaChi, double luong, int tongSoGioLam) {
        this.ten = ten;
        this.tuoi = tuoi;
        this.diaChi = diaChi;
        this.luong = luong;
        this.tongSoGioLam = tongSoGioLam;
    }

    // Các hàm get/set
    public String getTen() {
        return ten;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }

    public String getDiaChi() {
        return diaChi;
    }

    public void setDiaChi(String diaChi) {
        this.diaChi = diaChi;
    }

    public double getLuong() {
        return luong;
    }

    public void setLuong(double luong) {
        this.luong = luong;
    }

    public int getTongSoGioLam() {
        return tongSoGioLam;
    }

    public void setTongSoGioLam(int tongSoGioLam) {
        this.tongSoGioLam = tongSoGioLam;
    }

    // Phương thức getThongTin()
    public String getThongTin() {
        return "Tên: " + ten + "\nTuổi: " + tuoi + "\nĐịa chỉ: " + diaChi + "\nTiền lương: " + luong
                + "\nTổng số giờ làm: " + tongSoGioLam;
    }

    // Phương thức tinhThuong()
    public double tinhThuong() {
        if (tongSoGioLam >= 200) {
            return luong * 0.2;
        } else if (tongSoGioLam >= 100) {
            return luong * 0.1;
        } else {
            return 0;
        }
    }

    public static void main(String[] args) {
        // Example usage
        NhanVien nhanVien = new NhanVien("Nguyen Van A", 25, "Ha Noi", 1000, 150);
        System.out.println(nhanVien.getThongTin());
        System.out.println("Tiền thưởng: " + nhanVien.tinhThuong());
    }
}
