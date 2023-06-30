using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Printing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SanPham
{
    public partial class giohang : Form
    {
        List<Sanpham> ls = new List<Sanpham>();
        string name, pic;
        int price;
        public giohang()
        {
            InitializeComponent();
        }
        public giohang(string name,string pic,int price)
        {
            InitializeComponent();
            this.name = name;
            this.pic = pic;
            this.price = price;
        }

        private void giohang_Load(object sender, EventArgs e)
        {
            FileStream f = new FileStream("Sanpham.txt", FileMode.Open);
            StreamReader rd = new StreamReader(f, Encoding.UTF8);
            byte rong = 0;
            string line;
            while ((line = rd.ReadLine()) != null)
            {
                rong = 1;
                pic = line;
                name = rd.ReadLine();
                price = int.Parse(rd.ReadLine());
                ls.Add(new Sanpham(name, pic, price));
            }
            rd.Close();
            f.Close();
            // khong co gi de doc hay file rỗng 
            if (rong == 0) return;
            //lay thong tin cua danh sach rồi dán vào datagridview 
            dtgsanpham.DataSource = ls;
            pic_anh.Image = new Bitmap(Application.StartupPath + ls[0].Pic);
        }

        private void bt_xoa_Click(object sender, EventArgs e)
        {
            int i = dtgsanpham.CurrentCell.RowIndex;
            ls.RemoveAt(i);
            dtgsanpham.DataSource = null;
            dtgsanpham.DataSource = ls;
            dtgsanpham.Columns[0].Width = 250;
            dtgsanpham.Columns[1].Width = 125;
        }

        private void dtgsanpham_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            int i = dtgsanpham.CurrentCell.RowIndex;
            pic_anh.Image = new Bitmap(Application.StartupPath + ls[i].Pic);
        }

        private void bt_mua_Click(object sender, EventArgs e)
        {
            ThanhToan t = new ThanhToan(name, price, pic);
            t.ShowDialog();
        }

        private void bt_quaylai_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}