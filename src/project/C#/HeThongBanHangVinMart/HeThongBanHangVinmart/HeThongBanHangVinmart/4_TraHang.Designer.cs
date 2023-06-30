namespace HeThongBanHangVinmart
{
    partial class TraHang
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
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.textBox4 = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.btn_dongTraHang = new System.Windows.Forms.Button();
            this.btn_xaNhanTra = new System.Windows.Forms.Button();
            this.group_traHang = new System.Windows.Forms.GroupBox();
            this.btn_dong = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.Column6 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Column5 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.group_traHang.SuspendLayout();
            this.SuspendLayout();
            // 
            // textBox3
            // 
            this.textBox3.BackColor = System.Drawing.Color.Silver;
            this.textBox3.Location = new System.Drawing.Point(201, 477);
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(49, 20);
            this.textBox3.TabIndex = 81;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(150, 481);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(47, 13);
            this.label3.TabIndex = 80;
            this.label3.Text = "Số dòng";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(7, 480);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(80, 13);
            this.label2.TabIndex = 78;
            this.label2.Text = "Số nặt hàng trả";
            // 
            // textBox2
            // 
            this.textBox2.BackColor = System.Drawing.Color.Silver;
            this.textBox2.Location = new System.Drawing.Point(91, 477);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(43, 20);
            this.textBox2.TabIndex = 79;
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.Window;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Column6,
            this.Column3,
            this.Column2,
            this.Column4,
            this.Column1,
            this.Column5});
            this.dataGridView1.Location = new System.Drawing.Point(2, 1);
            this.dataGridView1.Margin = new System.Windows.Forms.Padding(2);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(938, 466);
            this.dataGridView1.TabIndex = 74;
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
            this.label4.Location = new System.Drawing.Point(41, 34);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(72, 13);
            this.label4.TabIndex = 65;
            this.label4.Text = "Số Lượng Trả";
            // 
            // btn_dongTraHang
            // 
            this.btn_dongTraHang.Location = new System.Drawing.Point(142, 81);
            this.btn_dongTraHang.Name = "btn_dongTraHang";
            this.btn_dongTraHang.Size = new System.Drawing.Size(91, 30);
            this.btn_dongTraHang.TabIndex = 64;
            this.btn_dongTraHang.Text = "Đóng";
            this.btn_dongTraHang.UseVisualStyleBackColor = true;
            // 
            // btn_xaNhanTra
            // 
            this.btn_xaNhanTra.Location = new System.Drawing.Point(45, 81);
            this.btn_xaNhanTra.Name = "btn_xaNhanTra";
            this.btn_xaNhanTra.Size = new System.Drawing.Size(91, 30);
            this.btn_xaNhanTra.TabIndex = 64;
            this.btn_xaNhanTra.Text = "Xác Nhận Trả";
            this.btn_xaNhanTra.UseVisualStyleBackColor = true;
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
            this.group_traHang.TabIndex = 83;
            this.group_traHang.TabStop = false;
            this.group_traHang.Text = "Trả Hàng";
            // 
            // btn_dong
            // 
            this.btn_dong.BackColor = System.Drawing.Color.Azure;
            this.btn_dong.ForeColor = System.Drawing.Color.Red;
            this.btn_dong.Location = new System.Drawing.Point(849, 470);
            this.btn_dong.Margin = new System.Windows.Forms.Padding(2);
            this.btn_dong.Name = "btn_dong";
            this.btn_dong.Size = new System.Drawing.Size(91, 36);
            this.btn_dong.TabIndex = 75;
            this.btn_dong.Text = "Đóng";
            this.btn_dong.UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(749, 470);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(91, 36);
            this.button1.TabIndex = 84;
            this.button1.Text = "Xoá";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(649, 470);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(91, 36);
            this.button2.TabIndex = 84;
            this.button2.Text = "Xuất File";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // Column6
            // 
            this.Column6.HeaderText = "STT";
            this.Column6.MinimumWidth = 6;
            this.Column6.Name = "Column6";
            this.Column6.ReadOnly = true;
            // 
            // Column3
            // 
            this.Column3.HeaderText = "Ngày trả hàng";
            this.Column3.Name = "Column3";
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
            this.Column1.HeaderText = "Nhà cung cấp";
            this.Column1.Name = "Column1";
            // 
            // Column5
            // 
            this.Column5.HeaderText = "Số lượng trả";
            this.Column5.MinimumWidth = 6;
            this.Column5.Name = "Column5";
            this.Column5.ReadOnly = true;
            // 
            // TraHang
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(942, 509);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.textBox3);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.group_traHang);
            this.Controls.Add(this.btn_dong);
            this.Name = "TraHang";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "TRẢ HÀNG";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.group_traHang.ResumeLayout(false);
            this.group_traHang.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.TextBox textBox4;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button btn_dongTraHang;
        private System.Windows.Forms.Button btn_xaNhanTra;
        private System.Windows.Forms.GroupBox group_traHang;
        private System.Windows.Forms.Button btn_dong;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column6;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column3;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column4;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Column5;
    }
}