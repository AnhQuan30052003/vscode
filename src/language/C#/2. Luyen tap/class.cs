using System;

namespace congtrunhanchia
{
    class nhanchiacongtru
    {
        float so1, so2;
        public nhanchiacongtru()
        {
            so1 = 1;
            so2 = 2;
        }
        public nhanchiacongtru(float so1, float so2)
        {
            this.so1 = so1;
            this.so2 = so2;
        }
        public void nhap()
        {
            do
            {
                Console.WriteLine("nhập vào số đầu: ");
                so1 = float.Parse(Console.ReadLine());
                Console.WriteLine("nhập vào số thứ hai: ");
                so2 = float.Parse(Console.ReadLine());
            }
            while ((so1 >= 'A' && so1 <= 'Z') || (so2 >= 'A' && so2 <= 'Z') || (so1 >= 'a' && so1 <= 'z') || (so2 >= 'a' && so2 <= 'z') || (so1 >= ':' && so1 <= '?')
                || (so2 >= ':' && so1 <= '?'));
        }
        public void cong()
        {
            Console.WriteLine($"ket qua cong 2 so :{so1 + so2}");
        }
        public void tru()
        {
            Console.WriteLine($"ket qua tru 2 so :{so1 - so2}");
        }
        public void nhan()
        {
            Console.WriteLine($"ket qua nhan 2 so :{so1 * so2}");
        }
        public void chia()
        {
            float i;
            if(so2 != 0)
            {
                i = (float)(so1 / so2);
                Console.WriteLine($"kết quả là : {i}");
            }  
        }
    }
}