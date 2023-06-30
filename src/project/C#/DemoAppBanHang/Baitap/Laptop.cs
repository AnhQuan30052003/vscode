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
    public partial class Laptop : Form
    {
        List<Sanpham> ds = new List<Sanpham>();
        public Laptop()
        {
            InitializeComponent();
        }

        private void page1_CheckedChanged(object sender, EventArgs e)
        {
            if (page1.Checked) giaodien1.Visible = true;
            else giaodien1.Visible = false;
        }

        private void page2_CheckedChanged(object sender, EventArgs e)
        {
            if (page2.Checked) giaodien2.Visible = true;
            else giaodien2.Visible = false;
        }

        private void page3_CheckedChanged(object sender, EventArgs e)
        {
            if (page3.Checked) giaodien3.Visible = true;
            else giaodien3.Visible = false;
        }

        // Load trang
        private void LapTop_Load(object sender, EventArgs e)
        {
            page1.Checked = true;
            giaodien2.Visible = false;
            giaodien3.Visible = false;
            FileStream f = new FileStream("thongtinlaptop.txt", FileMode.Open);
            StreamReader r = new StreamReader(f, Encoding.UTF8);
            string line;
            while ((line = r.ReadLine()) != null)
            {
                string tensp = r.ReadLine();
                string cpu = r.ReadLine();
                string ram = r.ReadLine();
                string ocung = r.ReadLine();
                string man = r.ReadLine();
                string cardm = r.ReadLine();
                string hdh = r.ReadLine();
                string tk = r.ReadLine();
                string thoidiem = r.ReadLine();
                int gia = int.Parse(r.ReadLine()) ;
                string xuong_dong = r.ReadLine();

                ds.Add(new Sanpham(tensp, line, gia));
            }
            r.Close();
            f.Close();
        }

        // Xu ly khi click vao chi tiet

        private void gr1chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[0].Name);
            f.ShowDialog();
        }
        private void gr2chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[1].Name);
            f.ShowDialog();
        }

        private void gr3chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[2].Name);
            f.ShowDialog();
        }

        private void gr4chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[3].Name);
            f.ShowDialog();
        }

        private void gr5chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[4].Name);
            f.ShowDialog();
        }

        private void gr6chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[5].Name);
            f.ShowDialog();
        }
        private void gr7chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[6].Name);
            f.ShowDialog();
        }

        private void gr8chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[7].Name);
            f.ShowDialog();
        }
        private void gr9chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[8].Name);
            f.ShowDialog();
        }

        private void gr10chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[9].Name);
            f.ShowDialog();
        }

        private void gr11chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[10].Name);
            f.ShowDialog();
        }

        private void gr12chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[11].Name);
            f.ShowDialog();
        }
        private void gr13chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[12].Name);
            f.ShowDialog();
        }

        private void gr14chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[13].Name);
            f.ShowDialog();
        }
        private void gr15chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[14].Name);
            f.ShowDialog();
        }

        private void gr16chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[15].Name);
            f.ShowDialog();
        }

        private void gr17chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[16].Name);
            f.ShowDialog();
        }

        private void gr18chitiet_Click(object sender, EventArgs e)
        {
            ChiTiet f = new ChiTiet(2, ds[17].Name);
            f.ShowDialog();
        }

        // Xu ly khi click mua
        private void gr1mua_Click(object sender, EventArgs e)
        {
            int i = 0;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr2mua_Click(object sender, EventArgs e)
        {
            int i = 1;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr3mua_Click(object sender, EventArgs e)
        {
            int i = 2;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr4mua_Click(object sender, EventArgs e)
        {
            int i = 3;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr5mua_Click(object sender, EventArgs e)
        {
            int i = 4;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr6mua_Click(object sender, EventArgs e)
        {
            int i = 5;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }
        private void gr7mua_Click(object sender, EventArgs e)
        {
            int i = 6;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr8mua_Click(object sender, EventArgs e)
        {
            int i = 7;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr9mua_Click(object sender, EventArgs e)
        {
            int i = 8;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr10mua_Click(object sender, EventArgs e)
        {
            int i = 9;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr11mua_Click(object sender, EventArgs e)
        {
            int i = 10;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr12mua_Click(object sender, EventArgs e)
        {

            int i = 11;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr13mua_Click(object sender, EventArgs e)
        {
            int i = 12;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr14mua_Click(object sender, EventArgs e)
        {
            int i = 13;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr15mua_Click(object sender, EventArgs e)
        {
            int i = 14;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr16mua_Click(object sender, EventArgs e)
        {
            int i = 15;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr17mua_Click(object sender, EventArgs e)
        {
            int i = 16;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        private void gr18mua_Click(object sender, EventArgs e)
        {
            int i = 17;
            ThanhToan t = new ThanhToan(ds[i].Name, ds[i].Price, ds[i].Pic);
            t.ShowDialog();
        }

        // Xu ly khi click them
        private void gr1them_Click(object sender, EventArgs e)
        {
            int i = 0;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr2them_Click(object sender, EventArgs e)
        {
            int i = 1;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr3them_Click(object sender, EventArgs e)
        {
            int i = 2;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr4them_Click(object sender, EventArgs e)
        {
            int i = 3;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr5them_Click(object sender, EventArgs e)
        {
            int i = 4;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr6them_Click(object sender, EventArgs e)
        {
            int i = 5;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }
        private void gr7them_Click(object sender, EventArgs e)
        {
            int i = 6;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr8them_Click(object sender, EventArgs e)
        {
            int i = 7;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr9them_Click(object sender, EventArgs e)
        {
            int i = 8;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr10them_Click(object sender, EventArgs e)
        {
            int i = 9;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr11them_Click(object sender, EventArgs e)
        {
            int i = 10;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr12them_Click(object sender, EventArgs e)
        {
            int i = 11;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr13them_Click(object sender, EventArgs e)
        {
            int i = 12;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr14them_Click(object sender, EventArgs e)
        {
            int i = 13;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr15them_Click(object sender, EventArgs e)
        {
            int i = 14;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr16them_Click(object sender, EventArgs e)
        {
            int i = 15;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }
        private void gr17them_Click(object sender, EventArgs e)
        {
            int i = 16;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void gr18them_Click(object sender, EventArgs e)
        {
            int i = 17;
            FileStream f = new FileStream("Sanpham.txt", FileMode.Append);
            StreamWriter w = new StreamWriter(f, Encoding.UTF8);
            w.WriteLine(ds[i].Pic);
            w.WriteLine(ds[i].Name);
            w.WriteLine(ds[i].Price);
            w.Close();
            f.Close();
            MessageBox.Show("Đã thêm vào giỏ hàng của bạn", "Thông báo");
        }

        private void trove_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            giohang g = new giohang();
            g.ShowDialog();
        }
    }
}