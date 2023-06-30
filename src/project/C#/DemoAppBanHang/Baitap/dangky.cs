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
    public partial class Dangky : Form
    {
        public Dangky()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            //Đảm bảo thông tin đầy đủ và mật khẩu xác nhận chính xác
            if(taikhoandk.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập tài khoản");
                taikhoandk.Focus();
            }
            else if (matkhaudk.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập mật khẩu");
                matkhaudk.Focus();
            }
            else if (nhaplaimatkhaudk.Text == "")
            {
                MessageBox.Show("Bạn chưa xác nhận mật khẩu");
                nhaplaimatkhaudk.Focus();
            }
            else if (sdtdk.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập số điện thoại");
                sdtdk.Focus();
            }
            else if (cmtdk.Text == "")
            {
                MessageBox.Show("Bạn chưa nhập CMT/CCCD");
                cmtdk.Focus();
            }
            else if (matkhaudk.Text != nhaplaimatkhaudk.Text)
            {
                MessageBox.Show("Xác nhận mật khẩu không chính xác");
                nhaplaimatkhaudk.Focus();
                nhaplaimatkhaudk.SelectAll();
            }
            //Kiểm tra mật khẩu hợp lệ và đúng định dạng
            else
            {
                User nd = new User(taikhoandk.Text, matkhaudk.Text, sdtdk.Text, cmtdk.Text );
                if(nd.Kiemtradinhdangtaikhoan() == false)
                {
                    taikhoandk.Focus();
                }
                else if(nd.Kiemtradinhdangmatkhau() == false)
                {
                    MessageBox.Show("Mật khẩu sai định dạng");
                    matkhaudk.Focus();
                }
                else if (nd.Kiemtradinhdangphone() == false)
                {
                    MessageBox.Show("Số điện thoại không hợp lệ");
                    sdtdk.Focus();
                }
                else if (nd.Kiemtradinhdangcmnd() == false)
                {
                    MessageBox.Show("Chứng minh nhân dân không hợp lệ");
                    cmtdk.Focus();
                }
                else
                {
                    MessageBox.Show("Đăng ký thành công","Thông báo",MessageBoxButtons.OK);
                    FileStream f = new FileStream("Thongtin.txt", FileMode.Append,FileAccess.Write,FileShare.None);
                    StreamWriter wr = new StreamWriter(f);
                    wr.WriteLine(taikhoandk.Text);
                    wr.WriteLine(matkhaudk.Text);
                    wr.Close();
                    f.Close();
                    DialogResult r = MessageBox.Show("Bạn có muốn quay lại giao diện đăng nhập không", "Thông báo", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                    if (DialogResult.Yes == r)
                    {
                        this.Hide();
                        Dangnhap Dn = new Dangnhap();
                        Dn.ShowDialog();
                        this.Close();
                    }            
                }
            }
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            this.Hide();
            Dangnhap Dn = new Dangnhap();
            Dn.ShowDialog();
            this.Close();
        }

    }
}