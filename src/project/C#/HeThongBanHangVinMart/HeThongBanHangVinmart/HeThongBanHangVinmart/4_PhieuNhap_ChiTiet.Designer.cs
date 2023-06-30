namespace HeThongBanHangVinmart
{
    partial class PhieuNhap_ChiTiet
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
            this.group_traHang = new System.Windows.Forms.GroupBox();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.btn_dongTraHang = new System.Windows.Forms.Button();
            this.btn_xaNhanTra = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.Column6 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column5 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btn_dong = new System.Windows.Forms.Button();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.group_traHang.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // group_traHang
            // 
            this.group_traHang.Controls.Add(this.textBox4);
            this.group_traHang.Controls.Add(this.label4);
            this.group_traHang.Controls.Add(this.btn_dongTraHang);
            this.group_traHang.Controls.Add(this.btn_xaNhanTra);
            this.group_traHang.Location = new System.Drawing.Point(316, 156);
            this.group_traHang.Name = "group_traHang";
            this.group_traHang.Size = new System.Drawing.Size(259, 123);
            this.group_traHang.TabIndex = 73;
            this.group_traHang.TabStop = false;
            this.group_traHang.Text = "Trả Hàng";
            // 
            // textBox4
            // 
            this.textBox4.Location = new System.Drawing.Point(119, 31);
            this.textBox4.Name = "textBox4";
            this.textBox4.Size = new System.Drawing.Size(100, 20);
            this.textBox4.TabIndex = 66;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(52, 35);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(64, 13);
            this.label4.TabIndex = 65;
            this.label4.Text = "Số lượng trả";
            // 
            // btn_dongTraHang
            // 
            this.btn_dongTraHang.Location = new System.Drawing.Point(138, 81);
            this.btn_dongTraHang.Name = "btn_dongTraHang";
            this.btn_dongTraHang.Size = new System.Drawing.Size(91, 30);
            this.btn_dongTraHang.TabIndex = 64;
            this.btn_dongTraHang.Text = "Đóng";
            this.btn_dongTraHang.UseVisualStyleBackColor = true;
            this.btn_dongTraHang.Click += new System.EventHandler(this.btn_dongTraHang_Click);
            // 
            // btn_xaNhanTra
            // 
            this.btn_xaNhanTra.Location = new System.Drawing.Point(41, 81);
            this.btn_xaNhanTra.Name = "btn_xaNhanTra";
            this.btn_xaNhanTra.Size = new System.Drawing.Size(91, 30);
            this.btn_xaNhanTra.TabIndex = 64;
            this.btn_xaNhanTra.Text = "Xác nhận trả";
            this.btn_xaNhanTra.UseVisualStyleBackColor = true;
            this.btn_xaNhanTra.Click += new System.EventHandler(this.btn_xaNhanTra_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(752, 472);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(91, 36);
            this.button1.TabIndex = 72;
            this.button1.Text = "Trả hàng";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.Window;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column6,
            this.Column2,
            this.Column4,
            this.Column1,
            this.Column5,
            this.Column3});
            this.dataGridView1.Location = new System.Drawing.Point(2, -3);
            this.dataGridView1.Margin = new System.Windows.Forms.Padding(2);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(938, 470);
            this.dataGridView1.TabIndex = 64;
            // 
            // Column6
            // 
            this.Column6.HeaderText = "STT";
            this.Column6.MinimumWidth = 6;
            this.Column6.Name = "Column6";
            this.Column6.ReadOnly = true;
            // 
            // Column2
            // 
            this.Column2.HeaderText = "Tên mặt hàng";
            this.Column2.MinimumWidth = 6;
            this.Column2.Name = "Column2";
            this.Column2.ReadOnly = true;
            // 
            // Column4
            // 
            this.Column4.HeaderText = "Tên loại mặt hàng";
            this.Column4.MinimumWidth = 6;
            this.Column4.Name = "Column4";
            this.Column4.ReadOnly = true;
            // 
            // Column1
            // 
            this.Column1.HeaderText = "Đơn giá";
            this.Column1.MinimumWidth = 6;
            this.Column1.Name = "Column1";
            this.Column1.ReadOnly = true;
            // 
            // Column5
            // 
            this.Column5.HeaderText = "Số lượng nhập";
            this.Column5.MinimumWidth = 6;
            this.Column5.Name = "Column5";
            this.Column5.ReadOnly = true;
            // 
            // Column3
            // 
            this.Column3.HeaderText = "Thành tiền";
            this.Column3.MinimumWidth = 6;
            this.Column3.Name = "Column3";
            this.Column3.ReadOnly = true;
            // 
            // textBox3
            // 
            this.textBox3.BackColor = System.Drawing.Color.Silver;
            this.textBox3.Location = new System.Drawing.Point(368, 480);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(49, 20);
            this.textBox3.TabIndex = 71;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(317, 484);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(47, 13);
            this.label3.TabIndex = 70;
            this.label3.Text = "Số dòng";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(167, 483);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(90, 13);
            this.label2.TabIndex = 68;
            this.label2.Text = "Số mặt hàng mua";
            // 
            // textBox1
            // 
            this.textBox1.BackColor = System.Drawing.Color.Silver;
            this.textBox1.Location = new System.Drawing.Point(60, 479);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 20);
            this.textBox1.TabIndex = 67;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(5, 482);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(52, 13);
            this.label1.TabIndex = 66;
            this.label1.Text = "Tổng tiền";
            // 
            // btn_dong
            // 
            this.btn_dong.BackColor = System.Drawing.Color.Azure;
            this.btn_dong.ForeColor = System.Drawing.Color.Red;
            this.btn_dong.Location = new System.Drawing.Point(849, 472);
            this.btn_dong.Margin = new System.Windows.Forms.Padding(2);
            this.btn_dong.Name = "btn_dong";
            this.btn_dong.Size = new System.Drawing.Size(91, 36);
            this.btn_dong.TabIndex = 65;
            this.btn_dong.Text = "Đóng";
            this.btn_dong.UseVisualStyleBackColor = false;
            this.btn_dong.Click += new System.EventHandler(this.btn_dong_Click);
            // 
            // textBox2
            // 
            this.textBox2.BackColor = System.Drawing.Color.Silver;
            this.textBox2.Location = new System.Drawing.Point(260, 480);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(43, 20);
            this.textBox2.TabIndex = 69;
            // 
            // PhieuNhap_ChiTiet
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(942, 509);
            this.Controls.Add(this.group_traHang);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btn_dong);
            this.Controls.Add(this.textBox2);
            this.Name = "PhieuNhap_ChiTiet";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "CHI TIẾT NHẬP HÀNG";
            this.Load += new System.EventHandler(this.PhieuNhap_ChiTiet_Load);
            this.group_traHang.ResumeLayout(false);
            this.group_traHang.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox group_traHang;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button btn_dongTraHang;
        private System.Windows.Forms.Button btn_xaNhanTra;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column6;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column5;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn_dong;
        private System.Windows.Forms.TextBox textBox2;
    }
}