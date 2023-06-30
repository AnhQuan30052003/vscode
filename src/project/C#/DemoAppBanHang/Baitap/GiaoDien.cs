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
using System.Media;

namespace SanPham
{
    public partial class Giao_dien : Form
    {
        private SoundPlayer choinhac = new SoundPlayer("Happy new year.wav");
        private SoundPlayer choinhac1 = new SoundPlayer("Chuyen cu bo qua.wav");
        string Taikhoan, Matkhau;
        public Giao_dien()
        {
            InitializeComponent();
        }
        public Giao_dien(string Tk, string Mk)
        {
            InitializeComponent();
            Taikhoan = Tk;
            Matkhau = Mk;
        }
        private void button10_Click(object sender, EventArgs e)
        {
            if (txtMkcu.Text != Matkhau)
            {
                MessageBox.Show("Mật khẩu cũ không chính xác !", "Thông báo !");
                txtMkcu.Text = "";
                txtMkcu.Focus();
                return;
            }

            if (txtMkcu.Text == txtMKmoi.Text)
            {
                MessageBox.Show("Mật khẩu mới không được trùng với mật khẩu cũ !", "Thông báo !");
                txtMKmoi.Text = txtMKmoilai.Text = "";
                txtMKmoi.Focus();
                return;
            }

            if (txtMKmoi.Text != txtMKmoilai.Text)
            {
                MessageBox.Show("Xác nhận lại mật khẩu chưa chính xác", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Error);
                txtMKmoilai.Text = "";
                txtMKmoilai.Focus();
                return;
            }
            List<Thongtin> ls = new List<Thongtin>();
            FileStream f = new FileStream("Thongtin.txt", FileMode.Open);
            StreamReader r = new StreamReader(f, Encoding.UTF8);
            string tk, mk;
            while ((tk = r.ReadLine()) != null)
            {
                mk = r.ReadLine();
                ls.Add(new Thongtin(tk, mk));
            }
            r.Close();
            f.Close();

            for(int i=0;i<ls.Count;i++)
            {
                if(txtdoitk.Text == ls[i].Tk && ls[i].Tk == Taikhoan && txtMkcu.Text == ls[i].Mk)
                {
                    if(MessageBox.Show("Bạn có chắn chắn muốn đổi mật khẩu ","Thông báo",MessageBoxButtons.YesNo,MessageBoxIcon.Question) == DialogResult.Yes)
                    {
                        ls[i].Mk = txtMKmoi.Text;
                        MessageBox.Show("Chúc mừng bạn đã đổi mật khẩu thành công", "Thông báo", MessageBoxButtons.OK);
                        FileStream fs = new FileStream("Thongtin.txt", FileMode.Create);
                        StreamWriter wr = new StreamWriter(fs);
                        for(int j = 0; j < ls.Count; j++)
                        {
                            wr.WriteLine(ls[j].Tk);
                            wr.WriteLine(ls[j].Mk);
                        }    
                        wr.Close();
                        fs.Close();
                        groupDMK.Visible = false;
                        return;
                    }    
                }
            }
        }

        private void checkMkcu_CheckedChanged(object sender, EventArgs e)
        {
            if (checkMkcu.Checked)
                txtMkcu.UseSystemPasswordChar = false;
            else
                txtMkcu.UseSystemPasswordChar = true;
        }

        private void checkMkmoi_CheckedChanged(object sender, EventArgs e)
        {
            if (checkMkmoi.Checked)
                txtMKmoi.UseSystemPasswordChar = false;
            else
                txtMKmoi.UseSystemPasswordChar = true;
        }

        private void checkMkmoilai_CheckedChanged(object sender, EventArgs e)
        {
            if (checkMkmoilai.Checked)
                txtMKmoilai.UseSystemPasswordChar = false;
            else
                txtMKmoilai.UseSystemPasswordChar = true;
        }

        private void bntDoimk_Click(object sender, EventArgs e)
        {
            txtdoitk.Text = Taikhoan;
            if (groupDMK.Visible == false) groupDMK.Visible = true;
        }

        private void bntDangxuat_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Bạn có muốn đăng xuất", "Thông báo", MessageBoxButtons.YesNo, MessageBoxIcon.Question) == DialogResult.Yes)
            {
                choinhac.Stop();
                choinhac1.Stop();
                this.Hide();
                Dangnhap dn = new Dangnhap();
                dn.ShowDialog();
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (groupDichvu.Visible == false) groupDichvu.Visible = true;
            else groupDichvu.Visible = false;
        }

        private void bntThoatDMK_Click(object sender, EventArgs e)
        {
            groupDMK.Visible = false;
        }

        private void bntGiohang_Click(object sender, EventArgs e)
        {
            giohang gh = new giohang();
            gh.ShowDialog();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            DienThoai dt = new DienThoai();
            dt.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MaytinhBang mt = new MaytinhBang();
            mt.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Laptop lt = new Laptop();
            lt.ShowDialog();
        }

        private void Giao_dien_Load(object sender, EventArgs e)
        {
            Text = "Xin chào: " + Taikhoan;
            radioHappynewyear.Checked = true;
        }
        private void radioHappynewyear_CheckedChanged(object sender, EventArgs e)
        {
            if (radioHappynewyear.Checked)
                choinhac.Play();
            else
                choinhac.Stop();
        }
        private void radiochuyencuqua_CheckedChanged(object sender, EventArgs e)
        {
            if (radiochuyencuqua.Checked)
                choinhac1.Play();
            else
                choinhac1.Stop();
        }

        private void btnnhac_Click(object sender, EventArgs e)
        {
            radiochuyencuqua.Checked = false;
            radioHappynewyear.Checked = false;
        }

        private void Giao_dien_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult r = MessageBox.Show("Thoát App ?", "Cánh báo", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
            if (r == DialogResult.Yes)
            {
                choinhac.Stop();
                choinhac1.Stop();
                e.Cancel = false;
            }
            else e.Cancel = true;
        }
    }
}