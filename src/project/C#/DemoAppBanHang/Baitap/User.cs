using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SanPham
{
    internal class User
    {
        private string taikhoan, matkhau, phone, cmnd;
        public User()
        {
            taikhoan = matkhau = phone = cmnd = "";
        }
        public User(string tk, string mk, string sdt, string cmt)
        {
            taikhoan = tk;
            matkhau = mk;
            phone = sdt;
            cmnd = cmt;
        }
        //true: hợp lệ - false: không hợp lệ
        public bool Kiemtradinhdangmatkhau()
        {
            //kiểm tra độ dài
            if (matkhau.Length < 4 || matkhau.Length > 16)
            {
                return false;
            }
            //kiểm tra chữ và số
            for (int i = 0; i < matkhau.Length; i++)
            {
                if (!(matkhau[i] >= 'A' && matkhau[i] <= 'Z' ||
                    matkhau[i] >= 'a' && matkhau[i] <= 'z' ||
                    matkhau[i] >= '0' && matkhau[i] <= '9'))
                {
                    return false;
                }
            }
            return true;
        }
        public bool Kiemtradinhdangtaikhoan()
        {
            if (taikhoan.Length < 6 )
            {
                MessageBox.Show("Tài khoản phải dài ít nhất 6 ký tự");
                return false;
            }
            else if(taikhoan.Length > 20)
            {
                MessageBox.Show("Tài khoản phải ít hơn 20 ký tự");
                return false;
            }
            else
            {
                FileStream check = new FileStream("Thongtin.txt", FileMode.Open);
                StreamReader checkwr = new StreamReader(check, Encoding.UTF8);
                string tk;
                int co = 0;
                while ((tk = checkwr.ReadLine()) != null)
                {
                    string mk = checkwr.ReadLine();
                    if (taikhoan == tk)
                    {
                        MessageBox.Show("Tài khoản đã tồn tại");
                        co = 1;
                        break;
                    }
                }
                check.Close();
                checkwr.Close();
                if (co == 1)
                    return false;
            }
            return true;
        }
        public bool Kiemtradinhdangphone()
        {
            if (phone.Length != 10 || phone[0] != '0')
            {
                return false;
            }
            return true;
        }
        public bool Kiemtradinhdangcmnd()
        {
            if (cmnd.Length != 9)
            {
                return false;
            }
            return true;
        }
    }
}