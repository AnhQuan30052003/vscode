using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SanPham
{
    public partial class Dangnhap : Form
    {
        public Dangnhap()
        {
            InitializeComponent();
        }

        private void bntDangnhap_Click(object sender, EventArgs e)
        {
            FileStream f = new FileStream("Thongtin.txt", FileMode.Open);
            StreamReader rd = new StreamReader(f, Encoding.UTF8);
            string tk,mk;
            byte flag = 0;
            while ((tk = rd.ReadLine())!= null)
            {    
                mk = rd.ReadLine();
                if (txtTaikhoan.Text == tk)
                {
                    if(txtMatkhau.Text == mk)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            rd.Close();
            f.Close();
            if (flag == 0)
            {
                MessageBox.Show("Tài khoản không tồn tại", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Error);
                txtTaikhoan.Focus();
            }
            else
            {
                this.Hide();
                Giao_dien fm1 = new Giao_dien(txtTaikhoan.Text, txtMatkhau.Text);
                fm1.ShowDialog();
                this.Close();
            }
        }

        private void bntThoat_Click(object sender, EventArgs e)
        {
            DialogResult r = MessageBox.Show("Bạn có muốn thoát không", "Thông báo", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (DialogResult.Yes == r)
                this.Close();
        }

        private void Dangnhap_Load(object sender, EventArgs e)
        {
            FileStream f = new FileStream("Sanpham.txt", FileMode.Create);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.Close();
            f.Close();
            txtTaikhoan.Focus();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
                txtMatkhau.UseSystemPasswordChar = false;
            else
                txtMatkhau.UseSystemPasswordChar = true;
        }

        private void bntDangky_Click(object sender, EventArgs e)
        {
            this.Hide();
            Dangky dk = new Dangky();
            dk.ShowDialog();
        }
    }
}