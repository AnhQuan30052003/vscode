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
    public partial class KhachHangMua : Form
    {
        public KhachHangMua()
        {
            InitializeComponent();
        }

        private void btn_muaHang_Click(object sender, EventArgs e)
        {
            ThemHangMua a = new ThemHangMua();
            a.ShowDialog();
        }

        private void btn_dong_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
