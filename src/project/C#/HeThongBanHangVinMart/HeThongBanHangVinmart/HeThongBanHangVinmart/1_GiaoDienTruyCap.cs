using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HeThongBanHangVinmart
{
    public partial class GiaoDienTruyCap : Form
    {
        private string taiKhoan;
        public GiaoDienTruyCap(string taiKhoan = "")
        {
            InitializeComponent();
            this.taiKhoan = taiKhoan;
        }

        private void GiaoDienTruyCap_Load(object sender, EventArgs e)
        {
            string tenDangNhap;
            if (taiKhoan == "quanly")
            {
                tenDangNhap = "Quản lý !";
                DanhMuc_nhanVien.Enabled = true;
            }
            else
            {
                tenDangNhap = "Nhân viên !";
                DanhMuc_nhanVien.Enabled = false;
            }
            txt_chao.Text = "Xin chào " + tenDangNhap;
        }

        private void heThong_dangXuat_Click(object sender, EventArgs e)
        {
            this.Hide();
            DangNhap a = new DangNhap();
            a.ShowDialog();
            this.Show();
        }

        private void heThong_thoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void heThong_doiMatKhau_Click(object sender, EventArgs e)
        {
            groupbox_doiMatKhau.Visible = true;
        }

        private void doiMatKhau_doi_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Đổi mật khẩu thành công !");
            groupbox_doiMatKhau.Visible = false;
        }

        private void doiMatKhau_dong_Click(object sender, EventArgs e)
        {
            groupbox_doiMatKhau.Visible = false;
        }

        private void DanhMuc_khachHang_Click(object sender, EventArgs e)
        {
            this.Hide();
            KhachHang a = new KhachHang();
            a.ShowDialog();
            this.Show();
        }

        private void DanhMuc_nhanVien_Click(object sender, EventArgs e)
        {
            this.Hide();
            NhanVien a = new NhanVien();
            a.ShowDialog();
            this.Show();
        }

        private void DanhMuc_nhaCungCap_Click(object sender, EventArgs e)
        {
            this.Hide();
            NhaCungCap a = new NhaCungCap();
            a.ShowDialog();
            this.Show();
        }

        private void menu_banHang_Click(object sender, EventArgs e)
        {
            this.Hide();
            KhachHangMua a = new KhachHangMua();
            a.ShowDialog();
            this.Show();
        }

        private void menu_thongKe_Click(object sender, EventArgs e)
        {
            this.Hide();
            ThongKe a = new ThongKe();
            a.ShowDialog();
            this.Show();
        }

        private void NhapXuat_khoHang_Click(object sender, EventArgs e)
        {
            this.Hide();
            KhoHang a = new KhoHang();
            a.ShowDialog();
            this.Show();
        }

        private void NhapXuat_traHang_Click(object sender, EventArgs e)
        {
            this.Hide();
            TraHang a = new TraHang();
            a.ShowDialog();
            this.Show();
        }
    }
}
