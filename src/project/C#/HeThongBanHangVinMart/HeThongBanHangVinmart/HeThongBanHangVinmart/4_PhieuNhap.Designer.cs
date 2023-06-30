namespace HeThongBanHangVinmart
{
    partial class PhieuNhap
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            this.txt_timKiem = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btn_dong = new System.Windows.Forms.Button();
            this.btn_luu = new System.Windows.Forms.Button();
            this.btn_khongLuu = new System.Windows.Forms.Button();
            this.btn_chiTiet = new System.Windows.Forms.Button();
            this.btn_xoa = new System.Windows.Forms.Button();
            this.btn_them = new System.Windows.Forms.Button();
            this.Column8 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column6 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column5 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column7 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.label1 = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.label2 = new System.Windows.Forms.Label();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btn_themHang = new System.Windows.Forms.Button();
            this.cb_tenCongTy = new System.Windows.Forms.ComboBox();
            this.dt_ngayLapPhieu = new System.Windows.Forms.DateTimePicker();
            this.txt_maNhaCungCap = new System.Windows.Forms.TextBox();
            this.txt_maNhanVien = new System.Windows.Forms.TextBox();
            this.txt_hoVaTenNhanVien = new System.Windows.Forms.TextBox();
            this.txt_maPhieuNhap = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // txt_timKiem
            // 
            this.txt_timKiem.Location = new System.Drawing.Point(63, 5);
            this.txt_timKiem.Margin = new System.Windows.Forms.Padding(2);
            this.txt_timKiem.Multiline = true;
            this.txt_timKiem.Name = "txt_timKiem";
            this.txt_timKiem.Size = new System.Drawing.Size(368, 21);
            this.txt_timKiem.TabIndex = 30;
            // 
            // groupBox2
            // 
            this.groupBox2.BackColor = System.Drawing.Color.Azure;
            this.groupBox2.Controls.Add(this.btn_dong);
            this.groupBox2.Controls.Add(this.btn_luu);
            this.groupBox2.Controls.Add(this.btn_khongLuu);
            this.groupBox2.Controls.Add(this.btn_chiTiet);
            this.groupBox2.Controls.Add(this.btn_xoa);
            this.groupBox2.Controls.Add(this.btn_them);
            this.groupBox2.ForeColor = System.Drawing.Color.Black;
            this.groupBox2.Location = new System.Drawing.Point(1026, 415);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox2.Size = new System.Drawing.Size(158, 241);
            this.groupBox2.TabIndex = 31;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Chức Năng ";
            // 
            // btn_dong
            // 
            this.btn_dong.ForeColor = System.Drawing.Color.Red;
            this.btn_dong.Location = new System.Drawing.Point(24, 184);
            this.btn_dong.Margin = new System.Windows.Forms.Padding(2);
            this.btn_dong.Name = "btn_dong";
            this.btn_dong.Size = new System.Drawing.Size(120, 50);
            this.btn_dong.TabIndex = 5;
            this.btn_dong.Text = "Đóng";
            this.btn_dong.UseVisualStyleBackColor = true;
            this.btn_dong.Click += new System.EventHandler(this.btn_dong_Click);
            // 
            // btn_luu
            // 
            this.btn_luu.Location = new System.Drawing.Point(24, 119);
            this.btn_luu.Margin = new System.Windows.Forms.Padding(2);
            this.btn_luu.Name = "btn_luu";
            this.btn_luu.Size = new System.Drawing.Size(120, 24);
            this.btn_luu.TabIndex = 4;
            this.btn_luu.Text = "Lưu";
            this.btn_luu.UseVisualStyleBackColor = true;
            // 
            // btn_khongLuu
            // 
            this.btn_khongLuu.Location = new System.Drawing.Point(24, 150);
            this.btn_khongLuu.Margin = new System.Windows.Forms.Padding(2);
            this.btn_khongLuu.Name = "btn_khongLuu";
            this.btn_khongLuu.Size = new System.Drawing.Size(120, 24);
            this.btn_khongLuu.TabIndex = 3;
            this.btn_khongLuu.Text = "Không Lưu";
            this.btn_khongLuu.UseVisualStyleBackColor = true;
            // 
            // btn_chiTiet
            // 
            this.btn_chiTiet.Location = new System.Drawing.Point(24, 89);
            this.btn_chiTiet.Margin = new System.Windows.Forms.Padding(2);
            this.btn_chiTiet.Name = "btn_chiTiet";
            this.btn_chiTiet.Size = new System.Drawing.Size(120, 24);
            this.btn_chiTiet.TabIndex = 2;
            this.btn_chiTiet.Text = "Chi tiết";
            this.btn_chiTiet.UseVisualStyleBackColor = true;
            this.btn_chiTiet.Click += new System.EventHandler(this.btn_chiTiet_Click);
            // 
            // btn_xoa
            // 
            this.btn_xoa.Location = new System.Drawing.Point(24, 57);
            this.btn_xoa.Margin = new System.Windows.Forms.Padding(2);
            this.btn_xoa.Name = "btn_xoa";
            this.btn_xoa.Size = new System.Drawing.Size(120, 24);
            this.btn_xoa.TabIndex = 1;
            this.btn_xoa.Text = "Xóa";
            this.btn_xoa.UseVisualStyleBackColor = true;
            // 
            // btn_them
            // 
            this.btn_them.Location = new System.Drawing.Point(24, 28);
            this.btn_them.Margin = new System.Windows.Forms.Padding(2);
            this.btn_them.Name = "btn_them";
            this.btn_them.Size = new System.Drawing.Size(120, 24);
            this.btn_them.TabIndex = 0;
            this.btn_them.Text = "Thêm";
            this.btn_them.UseVisualStyleBackColor = true;
            // 
            // Column8
            // 
            this.Column8.HeaderText = "Thành tiền";
            this.Column8.MinimumWidth = 6;
            this.Column8.Name = "Column8";
            this.Column8.ReadOnly = true;
            // 
            // Column6
            // 
            this.Column6.HeaderText = "Tên công ty";
            this.Column6.MinimumWidth = 6;
            this.Column6.Name = "Column6";
            this.Column6.ReadOnly = true;
            // 
            // Column5
            // 
            this.Column5.HeaderText = "Mã nhà cung cấp";
            this.Column5.MinimumWidth = 6;
            this.Column5.Name = "Column5";
            this.Column5.ReadOnly = true;
            // 
            // Column4
            // 
            this.Column4.HeaderText = "Họ tên nhân viên";
            this.Column4.MinimumWidth = 6;
            this.Column4.Name = "Column4";
            this.Column4.ReadOnly = true;
            // 
            // Column3
            // 
            this.Column3.HeaderText = "Mã nhân viên";
            this.Column3.MinimumWidth = 6;
            this.Column3.Name = "Column3";
            this.Column3.ReadOnly = true;
            // 
            // Column2
            // 
            this.Column2.HeaderText = "Ngày lập phiếu";
            this.Column2.MinimumWidth = 6;
            this.Column2.Name = "Column2";
            this.Column2.ReadOnly = true;
            // 
            // Column1
            // 
            dataGridViewCellStyle1.BackColor = System.Drawing.Color.White;
            this.Column1.DefaultCellStyle = dataGridViewCellStyle1;
            this.Column1.HeaderText = "Mã phiếu nhập";
            this.Column1.MinimumWidth = 6;
            this.Column1.Name = "Column1";
            this.Column1.ReadOnly = true;
            // 
            // Column7
            // 
            this.Column7.HeaderText = "STT";
            this.Column7.MinimumWidth = 6;
            this.Column7.Name = "Column7";
            this.Column7.ReadOnly = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.SystemColors.Control;
            this.label1.Location = new System.Drawing.Point(11, 9);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(49, 13);
            this.label1.TabIndex = 32;
            this.label1.Text = "Tìm kiếm";
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.Window;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column7,
            this.Column1,
            this.Column2,
            this.Column3,
            this.Column4,
            this.Column5,
            this.Column6,
            this.Column8});
            this.dataGridView1.Location = new System.Drawing.Point(4, 32);
            this.dataGridView1.Margin = new System.Windows.Forms.Padding(2);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(1180, 379);
            this.dataGridView1.TabIndex = 28;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(85, 52);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(78, 13);
            this.label2.TabIndex = 0;
            this.label2.Text = "Mã phiếu nhập";
            // 
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.Color.AliceBlue;
            this.groupBox1.Controls.Add(this.btn_themHang);
            this.groupBox1.Controls.Add(this.cb_tenCongTy);
            this.groupBox1.Controls.Add(this.dt_ngayLapPhieu);
            this.groupBox1.Controls.Add(this.txt_maNhaCungCap);
            this.groupBox1.Controls.Add(this.txt_maNhanVien);
            this.groupBox1.Controls.Add(this.txt_hoVaTenNhanVien);
            this.groupBox1.Controls.Add(this.txt_maPhieuNhap);
            this.groupBox1.Controls.Add(this.label7);
            this.groupBox1.Controls.Add(this.label6);
            this.groupBox1.Controls.Add(this.label5);
            this.groupBox1.Controls.Add(this.label4);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Location = new System.Drawing.Point(1, 415);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox1.Size = new System.Drawing.Size(1018, 241);
            this.groupBox1.TabIndex = 29;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Chi Tiết Thông Tin";
            // 
            // btn_themHang
            // 
            this.btn_themHang.BackColor = System.Drawing.Color.Azure;
            this.btn_themHang.Location = new System.Drawing.Point(943, 5);
            this.btn_themHang.Name = "btn_themHang";
            this.btn_themHang.Size = new System.Drawing.Size(75, 47);
            this.btn_themHang.TabIndex = 13;
            this.btn_themHang.Text = "Đặt hàng";
            this.btn_themHang.UseVisualStyleBackColor = false;
            this.btn_themHang.Click += new System.EventHandler(this.btn_themHang_Click);
            // 
            // cb_tenCongTy
            // 
            this.cb_tenCongTy.FormattingEnabled = true;
            this.cb_tenCongTy.Location = new System.Drawing.Point(601, 173);
            this.cb_tenCongTy.Name = "cb_tenCongTy";
            this.cb_tenCongTy.Size = new System.Drawing.Size(316, 21);
            this.cb_tenCongTy.TabIndex = 1;
            // 
            // dt_ngayLapPhieu
            // 
            this.dt_ngayLapPhieu.Enabled = false;
            this.dt_ngayLapPhieu.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.dt_ngayLapPhieu.Location = new System.Drawing.Point(601, 52);
            this.dt_ngayLapPhieu.Name = "dt_ngayLapPhieu";
            this.dt_ngayLapPhieu.Size = new System.Drawing.Size(101, 20);
            this.dt_ngayLapPhieu.TabIndex = 12;
            // 
            // txt_maNhaCungCap
            // 
            this.txt_maNhaCungCap.Location = new System.Drawing.Point(166, 174);
            this.txt_maNhaCungCap.Name = "txt_maNhaCungCap";
            this.txt_maNhaCungCap.Size = new System.Drawing.Size(162, 20);
            this.txt_maNhaCungCap.TabIndex = 0;
            // 
            // txt_maNhanVien
            // 
            this.txt_maNhanVien.BackColor = System.Drawing.Color.LightGray;
            this.txt_maNhanVien.Location = new System.Drawing.Point(166, 111);
            this.txt_maNhanVien.Name = "txt_maNhanVien";
            this.txt_maNhanVien.Size = new System.Drawing.Size(162, 20);
            this.txt_maNhanVien.TabIndex = 9;
            // 
            // txt_hoVaTenNhanVien
            // 
            this.txt_hoVaTenNhanVien.BackColor = System.Drawing.Color.Silver;
            this.txt_hoVaTenNhanVien.Location = new System.Drawing.Point(601, 114);
            this.txt_hoVaTenNhanVien.Name = "txt_hoVaTenNhanVien";
            this.txt_hoVaTenNhanVien.Size = new System.Drawing.Size(316, 20);
            this.txt_hoVaTenNhanVien.TabIndex = 8;
            // 
            // txt_maPhieuNhap
            // 
            this.txt_maPhieuNhap.BackColor = System.Drawing.Color.LightGray;
            this.txt_maPhieuNhap.Location = new System.Drawing.Point(166, 49);
            this.txt_maPhieuNhap.Name = "txt_maPhieuNhap";
            this.txt_maPhieuNhap.Size = new System.Drawing.Size(162, 20);
            this.txt_maPhieuNhap.TabIndex = 6;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(533, 177);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(64, 13);
            this.label7.TabIndex = 5;
            this.label7.Text = "Tên công ty";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(72, 177);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(91, 13);
            this.label6.TabIndex = 4;
            this.label6.Text = "Mã nhà cung cấp";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(542, 118);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(56, 13);
            this.label5.TabIndex = 3;
            this.label5.Text = "Nhân viên";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(91, 114);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(72, 13);
            this.label4.TabIndex = 2;
            this.label4.Text = "Mã nhân viên";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(520, 55);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(78, 13);
            this.label3.TabIndex = 1;
            this.label3.Text = "Ngày lập phiếu";
            // 
            // PhieuNhap
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1184, 661);
            this.Controls.Add(this.txt_timKiem);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.groupBox1);
            this.Name = "PhieuNhap";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "NHẬP HÀNG";
            this.groupBox2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txt_timKiem;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btn_dong;
        private System.Windows.Forms.Button btn_luu;
        private System.Windows.Forms.Button btn_khongLuu;
        private System.Windows.Forms.Button btn_chiTiet;
        private System.Windows.Forms.Button btn_xoa;
        private System.Windows.Forms.Button btn_them;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column8;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column6;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column5;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column7;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btn_themHang;
        private System.Windows.Forms.ComboBox cb_tenCongTy;
        private System.Windows.Forms.DateTimePicker dt_ngayLapPhieu;
        private System.Windows.Forms.TextBox txt_maNhaCungCap;
        private System.Windows.Forms.TextBox txt_maNhanVien;
        private System.Windows.Forms.TextBox txt_hoVaTenNhanVien;
        private System.Windows.Forms.TextBox txt_maPhieuNhap;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
    }
}