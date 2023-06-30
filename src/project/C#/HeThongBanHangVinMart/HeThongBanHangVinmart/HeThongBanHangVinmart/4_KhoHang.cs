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
    public partial class KhoHang : Form
    {
        public KhoHang()
        {
            InitializeComponent();
        }

        private void btn_loaiHang_Click(object sender, EventArgs e)
        {
            LoaiMatHang a = new LoaiMatHang();
            a.ShowDialog();
        }

        private void btn_datHang_Click(object sender, EventArgs e)
        {
            PhieuNhap a = new PhieuNhap();
            a.ShowDialog();
        }

        private void btn_dong_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
