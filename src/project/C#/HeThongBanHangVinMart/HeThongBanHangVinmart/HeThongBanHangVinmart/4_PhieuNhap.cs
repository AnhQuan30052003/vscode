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
    public partial class PhieuNhap : Form
    {
        public PhieuNhap()
        {
            InitializeComponent();
        }

        private void btn_chiTiet_Click(object sender, EventArgs e)
        {
            PhieuNhap_ChiTiet a = new PhieuNhap_ChiTiet();
            a.ShowDialog();
        }

        private void btn_themHang_Click(object sender, EventArgs e)
        {
            PhieuNhap_ThemHang a = new PhieuNhap_ThemHang();
            a.ShowDialog();
        }

        private void btn_dong_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
