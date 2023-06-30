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
    public partial class PhieuNhap_ChiTiet : Form
    {
        public PhieuNhap_ChiTiet()
        {
            InitializeComponent();
        }

        private void PhieuNhap_ChiTiet_Load(object sender, EventArgs e)
        {
            group_traHang.Visible = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            group_traHang.Visible = true;
        }

        private void btn_dongTraHang_Click(object sender, EventArgs e)
        {
            group_traHang.Visible = false;
        }

        private void btn_xaNhanTra_Click(object sender, EventArgs e)
        {
            MessageBox.Show("ĐÃ thêm vào danh sách trả hàng !");
            group_traHang.Visible = false;
        }

        private void btn_dong_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
