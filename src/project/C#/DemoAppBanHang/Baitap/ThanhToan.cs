using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SanPham
{
    public partial class ThanhToan : Form
    {
        private string lay_ten, lay_anh;
        private int lay_gia;
        public ThanhToan()
        {
            InitializeComponent();
        }

        public ThanhToan(string lay_ten, int lay_gia, string lay_anh)
        {
            InitializeComponent();
            this.lay_ten = lay_ten;
            this.lay_gia = lay_gia;
            this.lay_anh = lay_anh;
        }
        public bool checksdt(string sdt)
        {
            if (sdt.Length != 10 || sdt[0] != '0')
            {
                return false;
            }
            return true;
        }
        public bool checkemail(string mail)
        {
            return Regex.IsMatch(mail, @"^[a-zA-Z0-9_.]{1,100}@gmail.com$");
        }

        private void btnthanhtoan_Click(object sender, EventArgs e)
        {
            string first = ho.Text;
            string last = ten.Text;
            string address = diachi.Text;
            string sdt = sodienthoai.Text;
            string mail = email.Text;
            decimal soluong = numericUpDown1.Value; //lấy giá trị của số lượng

            if (ho.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập Họ");
                ho.Focus();
            }
            else if (ten.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập Tên");
                ten.Focus();
            }
            else if (diachi.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập Địa chỉ");
                diachi.Focus();
            }
            else if (sodienthoai.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập số điện thoại");
                sodienthoai.Focus();
            }
            else if (checksdt(sdt) == false)
            {
                MessageBox.Show("Số điện thoại không đúng định dạng");
                sodienthoai.Focus();
            }
            else if (email.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập email");
                email.Focus();
            }
            else if (!checkemail(mail))
            {
                MessageBox.Show("Email không đúng định dạng");
                email.Focus();
            }
            else if (soluong <= 0)
            {
                MessageBox.Show("Vui lòng nhập số lượng nhiều hơn 0 sản phẩm");
            }
            else
            {
                DialogResult dlr = MessageBox.Show("Thanh toán thành công !, Chúng tôi sẽ sớm giao hàng tới bạn!");
                this.Close();
            }
        }

        private void ThanhToan_Load(object sender, EventArgs e)
        {
            ten_sp_thanh_toan.Text = lay_ten;
            tong_tien_thanh_toan.Text = lay_gia.ToString();
            anh.Image = new Bitmap(Application.StartupPath + lay_anh);
            numericUpDown1.Value = 1;
        }
        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            if (numericUpDown1.Value <= 1)
            {
                numericUpDown1.Value = 1;
                tong_tien_thanh_toan.Text = lay_gia.ToString();
            }
            else tong_tien_thanh_toan.Text = (numericUpDown1.Value * lay_gia).ToString();
        }
    }
}