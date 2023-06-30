namespace BaiThucHanh3 {
    class MH {

        string? ms, ten;
        int so_don_vi_hoc_trinh;
        float ti_le_qua_trinh, diem_qua_trinh, ti_le_giua_ky, diem_thi_giua_ky, diem_thi_cuoi_ky;

        // Nhập dữ liệu môn học
        public void Nhap() {
            Console.Write("Nhập mã số môn học: ");
            ms = Console.ReadLine();
            Console.Write("Nhập tên môn học: ");
            ten = Console.ReadLine();
            Console.Write("Nhập số đơn vị học trình: ");
            so_don_vi_hoc_trinh = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập tỉ lệ quá trình: ");
            ti_le_qua_trinh = Convert.ToSingle(Console.ReadLine());
            Console.Write("Nhập điểm quá trình: ");
            diem_qua_trinh = Convert.ToSingle(Console.ReadLine());
            Console.Write("Nhập tỉ lệ giữa kỳ: ");
            ti_le_giua_ky = Convert.ToSingle(Console.ReadLine());
            Console.Write("Nhập điểm thi giữa kỳ: ");
            diem_thi_giua_ky = Convert.ToSingle(Console.ReadLine());
            Console.Write("Nhập điểm thi cuối kỳ: ");
            diem_thi_cuoi_ky = Convert.ToSingle(Console.ReadLine());
        }

        public int So_don_vi_hoc_trinh() {
            return so_don_vi_hoc_trinh;
        }

        public float Diem_thi_giua_ky() {
            return diem_thi_giua_ky;
        }

        public float Diem_thi_cuoi_ky() {
            return diem_thi_cuoi_ky;
        }


        // Tính điểm trung bình từng môn học
        public float DTB() {
            return (float) (ti_le_qua_trinh*diem_qua_trinh + ti_le_giua_ky*diem_thi_giua_ky + (1 - ti_le_qua_trinh - ti_le_giua_ky)*diem_thi_cuoi_ky);
        }

        // Xuất thông tin môn học
        public void Xuat() {
            Console.WriteLine($"Môn học: {ten}, Điểm quá trình: {diem_qua_trinh}, Điểm thi giữa kỳ: {diem_thi_giua_ky}, Điểm thi cuối kỳ: {diem_thi_cuoi_ky}, Điểm trung bình môn: {DTB()}");
        }
    }

    class SV {
        string? ms, ten;
        int so_mon_hoc;
        MH[] mh = new MH[1000];
        
        // Nhập dữ liệu sinh viên
        public void Nhap() {
            Console.Write("Nhập mã số sinh viên: ");
            ms = Console.ReadLine();
            Console.Write("Nhập tên sinh viên: ");
            ten = Console.ReadLine();
            Console.Write("Nhập số môn học: ");
            so_mon_hoc = Convert.ToInt32(Console.ReadLine());

            Console.Clear();
            mh = new MH[so_mon_hoc];
            for (int i = 0; i < so_mon_hoc; i++) {
                Console.WriteLine("Môn học thứ {0}", i+1);
                mh[i] = new MH();
                mh[i].Nhap();
                Console.WriteLine();
            }
        }

        // Tính điểm trung bình cả học kỳ
        float DTB_HocKy() {
            float tong = 0;
            int tong_don_vi_hoc_trinh = 0;
            for (int i = 0; i < so_mon_hoc; i++) {
                tong += (float) (mh[i].DTB() * mh[i].So_don_vi_hoc_trinh());
                tong_don_vi_hoc_trinh += mh[i].So_don_vi_hoc_trinh();
            }
            return (float) (tong / tong_don_vi_hoc_trinh);
        }

        // Điểm trung bình tích lũy
        float DTB_TichLuy() {
            float tong = 0;
            int tong_don_vi_hoc_trinh = 0;
            for (int i = 0; i < so_mon_hoc; i++) {
                if (mh[i].DTB() >= 5F)
                    tong += (float) (mh[i].DTB() * mh[i].So_don_vi_hoc_trinh());
                tong_don_vi_hoc_trinh += mh[i].So_don_vi_hoc_trinh();
            }
            return (float) (tong / tong_don_vi_hoc_trinh);
        }

        // Xuất thông tin sinh viên
        public void XuatThongTinSinhVien() {
            Console.WriteLine($"Mã số: {ms}, Tên: {ten}, Điểm trung bình học kỳ: {DTB_HocKy()}, Điểm trung bình tích lũy: {DTB_TichLuy()}");
        }

        // Kiểm tra
        bool KiemTra() {
            if (DTB_HocKy() <= 7F) return false;
            for (int i = 0; i < so_mon_hoc; i++) {
                if (mh[i].DTB() < 5.5F || mh[i].Diem_thi_giua_ky() < 5.5F || mh[i].Diem_thi_cuoi_ky() < 5.5F)
                    return false;
            }
            return true;
        }

        // Sinh viên có nhận học bỏng hay không ?
        public void HocBong() {
            if (KiemTra()) Console.WriteLine("-> Đủ điều kiện nhận học bổng");
            else Console.WriteLine("-> Không đủ điều kiện nhận học bổng !");
        }
    }
}