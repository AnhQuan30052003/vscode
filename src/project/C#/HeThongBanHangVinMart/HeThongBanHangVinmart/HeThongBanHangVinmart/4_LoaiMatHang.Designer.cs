namespace HeThongBanHangVinmart
{
    partial class LoaiMatHang
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
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.txt_tenLoaiHang = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.txt_maLoaiHang = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.btn_dong = new System.Windows.Forms.Button();
            this.btn_luu = new System.Windows.Forms.Button();
            this.btn_khongLuu = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btn_chinhSua = new System.Windows.Forms.Button();
            this.btn_them = new System.Windows.Forms.Button();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btn_xoa = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // Column2
            // 
            this.Column2.HeaderText = "Tên loại hàng";
            this.Column2.MinimumWidth = 6;
            this.Column2.Name = "Column2";
            this.Column2.ReadOnly = true;
            // 
            // Column3
            // 
            this.Column3.HeaderText = "STT";
            this.Column3.MinimumWidth = 6;
            this.Column3.Name = "Column3";
            this.Column3.ReadOnly = true;
            // 
            // txt_tenLoaiHang
            // 
            this.txt_tenLoaiHang.Location = new System.Drawing.Point(14, 123);
            this.txt_tenLoaiHang.Name = "txt_tenLoaiHang";
            this.txt_tenLoaiHang.Size = new System.Drawing.Size(249, 20);
            this.txt_tenLoaiHang.TabIndex = 0;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 100);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(72, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Tên loại hàng";
            // 
            // txt_maLoaiHang
            // 
            this.txt_maLoaiHang.BackColor = System.Drawing.Color.Silver;
            this.txt_maLoaiHang.Location = new System.Drawing.Point(14, 57);
            this.txt_maLoaiHang.Name = "txt_maLoaiHang";
            this.txt_maLoaiHang.Size = new System.Drawing.Size(249, 20);
            this.txt_maLoaiHang.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 32);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(68, 13);
            this.label2.TabIndex = 0;
            this.label2.Text = "Mã loại hàng";
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
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.Color.Azure;
            this.groupBox1.Controls.Add(this.txt_tenLoaiHang);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.txt_maLoaiHang);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Location = new System.Drawing.Point(2, 414);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox1.Size = new System.Drawing.Size(280, 241);
            this.groupBox1.TabIndex = 39;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Chi Tiết Thông Tin";
            // 
            // btn_chinhSua
            // 
            this.btn_chinhSua.Location = new System.Drawing.Point(24, 89);
            this.btn_chinhSua.Margin = new System.Windows.Forms.Padding(2);
            this.btn_chinhSua.Name = "btn_chinhSua";
            this.btn_chinhSua.Size = new System.Drawing.Size(120, 24);
            this.btn_chinhSua.TabIndex = 2;
            this.btn_chinhSua.Text = "Chỉnh sửa";
            this.btn_chinhSua.UseVisualStyleBackColor = true;
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
            // Column1
            // 
            this.Column1.HeaderText = "Mã loại hàng";
            this.Column1.MinimumWidth = 6;
            this.Column1.Name = "Column1";
            this.Column1.ReadOnly = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(9, 9);
            this.label1.Margin = new System.Windows.Forms.Padding(2, 0, 2, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(49, 13);
            this.label1.TabIndex = 37;
            this.label1.Text = "Tìm kiếm";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(61, 5);
            this.textBox1.Margin = new System.Windows.Forms.Padding(2);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(383, 21);
            this.textBox1.TabIndex = 36;
            // 
            // groupBox2
            // 
            this.groupBox2.BackColor = System.Drawing.Color.Azure;
            this.groupBox2.Controls.Add(this.btn_dong);
            this.groupBox2.Controls.Add(this.btn_luu);
            this.groupBox2.Controls.Add(this.btn_khongLuu);
            this.groupBox2.Controls.Add(this.btn_chinhSua);
            this.groupBox2.Controls.Add(this.btn_xoa);
            this.groupBox2.Controls.Add(this.btn_them);
            this.groupBox2.Location = new System.Drawing.Point(286, 414);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(2);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(2);
            this.groupBox2.Size = new System.Drawing.Size(158, 241);
            this.groupBox2.TabIndex = 40;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Chức Năng ";
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
            // dataGridView1
            // 
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.Window;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column3,
            this.Column1,
            this.Column2});
            this.dataGridView1.Location = new System.Drawing.Point(5, 31);
            this.dataGridView1.Margin = new System.Windows.Forms.Padding(2);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(439, 379);
            this.dataGridView1.TabIndex = 38;
            // 
            // LoaiMatHang
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(446, 661);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.dataGridView1);
            this.Name = "LoaiMatHang";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "QUẢN LÝ LOẠI MẶT HÀNG";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.TextBox txt_tenLoaiHang;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txt_maLoaiHang;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btn_dong;
        private System.Windows.Forms.Button btn_luu;
        private System.Windows.Forms.Button btn_khongLuu;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btn_chinhSua;
        private System.Windows.Forms.Button btn_them;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Button btn_xoa;
        private System.Windows.Forms.DataGridView dataGridView1;
    }
}