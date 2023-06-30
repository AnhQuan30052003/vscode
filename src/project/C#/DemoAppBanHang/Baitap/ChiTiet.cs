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
    public partial class ChiTiet : Form
    {
        private string ten, pic, gia;
        private int so;
        public ChiTiet()
        {
            InitializeComponent();
        }
        public ChiTiet(int so, string ten)
        {
            InitializeComponent();
            this.so = so;
            this.ten = ten;
        }

        private void ChiTiet_Load(object sender, EventArgs e)
        {
            string path;
            if (so == 1) path = "thongtindienthoai.txt";
            else if (so == 2) path = "thongtinlaptop.txt";
            else path = "thongtinmaytinhbang.txt";
            FileStream f = new FileStream(path, FileMode.Open);
            StreamReader r = new StreamReader(f, Encoding.UTF8);

            while ((pic = r.ReadLine()) != null)
            {
                if (so == 1)
                {
                    string tensp = r.ReadLine();
                    string man_hinh = r.ReadLine();
                    string he_dieu_hanh = r.ReadLine();
                    string cam_sau = r.ReadLine();
                    string cam_truoc = r.ReadLine();
                    string chip = r.ReadLine();
                    string ram = r.ReadLine();
                    string dung_luong = r.ReadLine();
                    string sim = r.ReadLine();
                    string pin = r.ReadLine();
                    gia = r.ReadLine();
                    string xuong_dong = r.ReadLine();

                    if (tensp == ten)
                    {
                        //đem ảnh của chi tiết ra ngoài 
                        pic_anh.Image = new Bitmap(Application.StartupPath + pic);
                        string text = tensp + "\n" + man_hinh + "\n" + he_dieu_hanh + "\n" + cam_sau + "\n" + cam_truoc + "\n" + chip + "\n" + ram + ", " + dung_luong + "\n" + sim + "\n" + pin + "\nGiá: " + gia;
                        gr_thongtin.Text = text;
                        break;
                    }
                }
                else if (so == 2)
                {// tablet 
                    string tensp = r.ReadLine();
                    string cpu = r.ReadLine();
                    string ram = r.ReadLine();
                    string ocung = r.ReadLine();
                    string man = r.ReadLine();
                    string cardm = r.ReadLine();
                    string hdh = r.ReadLine();
                    string tk = r.ReadLine();
                    string thoidiem = r.ReadLine();
                    gia = r.ReadLine();
                    string xuong_dong = r.ReadLine();
                    if (tensp == ten)
                    {
                        pic_anh.Image = new Bitmap(Application.StartupPath + pic);
                        string text = tensp + "\n" + cpu + "\n" + ram + "\n" + ocung + "\n" + man + "\n" + cardm  + "\n" + hdh + "\n" + tk + "\n" + thoidiem + "\nGiá: " + gia;
                        gr_thongtin.Text = text;
                        break;
                    }
                }
                else
                {// laptop 
                    string tensp = r.ReadLine();
                    gia = r.ReadLine();
                    string mh = r.ReadLine();
                    string hdh = r.ReadLine();
                    string chip = r.ReadLine();
                    string ram = r.ReadLine();
                    string dl = r.ReadLine();
                    string cams = r.ReadLine();
                    string camt = r.ReadLine();
                    string pin = r.ReadLine();
                    string xuong_dong = r.ReadLine();
                    if (tensp == ten)
                    {
                        pic_anh.Image = new Bitmap(Application.StartupPath + pic);
                        string text = tensp + "\n" + mh + "\n" + hdh + "\n" + chip + "\n"+ram + "\n" + dl + "\n " + cams + "\n" + camt + "\n" + pin + "\nGiá: " + gia;
                        gr_thongtin.Text = text;
                        break;
                    }
                }
            }
            r.Close();
            f.Close();
        }
        private void bnt_mua_Click(object sender, EventArgs e)
        {
            ThanhToan t = new ThanhToan(ten, int.Parse(gia), pic);
            t.ShowDialog();
        }
    }
}