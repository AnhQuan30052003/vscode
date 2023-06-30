using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HeThongBanHangVinmart
{
    public partial class DangNhap : Form
    {
        public DangNhap()
        {
            InitializeComponent();
        }

        private void checkbox_hienThiMatKhau_CheckedChanged(object sender, EventArgs e)
        {
            if (checkbox_hienThiMatKhau.Checked) txt_matKhau.UseSystemPasswordChar = false;
            else txt_matKhau.UseSystemPasswordChar = true;
        }

        private void btn_thoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btn_dangNhap_Click(object sender, EventArgs e)
        {
            this.Hide();
            GiaoDienTruyCap a = new GiaoDienTruyCap(txt_taiKhoan.Text);
            a.ShowDialog();
            this.Close();
        }
    }
}
