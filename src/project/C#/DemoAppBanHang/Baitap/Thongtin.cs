using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Mail;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SanPham
{

    internal class Thongtin
    {
        string tk, mk;
        public Thongtin()
        {
            tk = "";
            mk = "";
        }
        public Thongtin(string tk, string mk)
        {
            this.tk = tk;
            this.mk = mk;
        }
        public string Tk { get => tk; set => tk = value; }
        public string Mk { get => mk; set => mk = value; }
    }
        
}