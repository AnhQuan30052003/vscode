using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SanPham
{
    internal class Sanpham
    {
        string name, pic;
        int price;
        public Sanpham()
        {
            name = "";
            pic = "";
            price = 0;
        }
        public Sanpham(string name, string pic, int price)
        {
            this.name = name;
            this.pic = pic;
            this.price = price;
        }
        public string Name { get => name; set => name = value; }
        public int Price { get => price; set => price = value; }
        public string Pic { get => pic; set => pic = value; }
    }
}