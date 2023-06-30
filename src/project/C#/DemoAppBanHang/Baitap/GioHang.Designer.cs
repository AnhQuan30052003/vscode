namespace SanPham
{
    partial class giohang
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(giohang));
            this.pic_anh = new System.Windows.Forms.PictureBox();
            this.panel2 = new System.Windows.Forms.Panel();
            this.bt_xoa = new System.Windows.Forms.Button();
            this.bt_mua = new System.Windows.Forms.Button();
            this.bt_quaylai = new System.Windows.Forms.Button();
            this.dtgsanpham = new System.Windows.Forms.DataGridView();
            this.Colname = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Colprice = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.label1 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.pictureBox3 = new System.Windows.Forms.PictureBox();
            this.pictureBox4 = new System.Windows.Forms.PictureBox();
            this.pictureBox5 = new System.Windows.Forms.PictureBox();
            this.pictureBox6 = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.pic_anh)).BeginInit();
            this.panel2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dtgsanpham)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).BeginInit();
            this.SuspendLayout();
            // 
            // pic_anh
            // 
            this.pic_anh.BackColor = System.Drawing.SystemColors.Control;
            this.pic_anh.Location = new System.Drawing.Point(817, 120);
            this.pic_anh.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.pic_anh.Name = "pic_anh";
            this.pic_anh.Size = new System.Drawing.Size(313, 270);
            this.pic_anh.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pic_anh.TabIndex = 6;
            this.pic_anh.TabStop = false;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.Lavender;
            this.panel2.Controls.Add(this.bt_xoa);
            this.panel2.Controls.Add(this.bt_mua);
            this.panel2.Location = new System.Drawing.Point(817, 394);
            this.panel2.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(313, 266);
            this.panel2.TabIndex = 4;
            // 
            // bt_xoa
            // 
            this.bt_xoa.BackColor = System.Drawing.Color.AliceBlue;
            this.bt_xoa.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bt_xoa.Font = new System.Drawing.Font("Broadway", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_xoa.ForeColor = System.Drawing.Color.Red;
            this.bt_xoa.Location = new System.Drawing.Point(56, 19);
            this.bt_xoa.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.bt_xoa.Name = "bt_xoa";
            this.bt_xoa.Size = new System.Drawing.Size(203, 97);
            this.bt_xoa.TabIndex = 5;
            this.bt_xoa.Text = "Xóa Khỏi Giỏ Hàng";
            this.bt_xoa.UseVisualStyleBackColor = false;
            this.bt_xoa.Click += new System.EventHandler(this.bt_xoa_Click);
            // 
            // bt_mua
            // 
            this.bt_mua.BackColor = System.Drawing.Color.AliceBlue;
            this.bt_mua.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bt_mua.Font = new System.Drawing.Font("Broadway", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_mua.ForeColor = System.Drawing.Color.Red;
            this.bt_mua.Location = new System.Drawing.Point(56, 143);
            this.bt_mua.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.bt_mua.Name = "bt_mua";
            this.bt_mua.Size = new System.Drawing.Size(203, 98);
            this.bt_mua.TabIndex = 4;
            this.bt_mua.Text = "Mua ngay";
            this.bt_mua.UseVisualStyleBackColor = false;
            this.bt_mua.Click += new System.EventHandler(this.bt_mua_Click);
            // 
            // bt_quaylai
            // 
            this.bt_quaylai.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.bt_quaylai.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.bt_quaylai.ForeColor = System.Drawing.Color.White;
            this.bt_quaylai.Location = new System.Drawing.Point(0, 0);
            this.bt_quaylai.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.bt_quaylai.Name = "bt_quaylai";
            this.bt_quaylai.Size = new System.Drawing.Size(43, 37);
            this.bt_quaylai.TabIndex = 4;
            this.bt_quaylai.Text = "<";
            this.bt_quaylai.UseVisualStyleBackColor = false;
            this.bt_quaylai.Click += new System.EventHandler(this.bt_quaylai_Click);
            // 
            // dtgsanpham
            // 
            this.dtgsanpham.BackgroundColor = System.Drawing.SystemColors.Menu;
            this.dtgsanpham.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dtgsanpham.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Colname,
            this.Colprice});
            this.dtgsanpham.Location = new System.Drawing.Point(116, 120);
            this.dtgsanpham.Margin = new System.Windows.Forms.Padding(4);
            this.dtgsanpham.Name = "dtgsanpham";
            this.dtgsanpham.RowHeadersWidth = 51;
            this.dtgsanpham.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dtgsanpham.Size = new System.Drawing.Size(692, 540);
            this.dtgsanpham.TabIndex = 8;
            this.dtgsanpham.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dtgsanpham_CellContentClick);
            // 
            // Colname
            // 
            this.Colname.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.None;
            this.Colname.DataPropertyName = "Name";
            this.Colname.HeaderText = "Name";
            this.Colname.MinimumWidth = 6;
            this.Colname.Name = "Colname";
            this.Colname.Width = 250;
            // 
            // Colprice
            // 
            this.Colprice.DataPropertyName = "Price";
            this.Colprice.HeaderText = "Price";
            this.Colprice.MinimumWidth = 6;
            this.Colprice.Name = "Colprice";
            this.Colprice.Width = 125;
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 28.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Red;
            this.label1.Location = new System.Drawing.Point(404, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(485, 76);
            this.label1.TabIndex = 9;
            this.label1.Text = "Giỏ Hàng Của Bạn";
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(0, 661);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(1239, 73);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 10;
            this.pictureBox1.TabStop = false;
            // 
            // pictureBox2
            // 
            this.pictureBox2.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.pictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox2.Image")));
            this.pictureBox2.Location = new System.Drawing.Point(0, 394);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(111, 265);
            this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox2.TabIndex = 11;
            this.pictureBox2.TabStop = false;
            // 
            // pictureBox3
            // 
            this.pictureBox3.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.pictureBox3.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox3.Image")));
            this.pictureBox3.Location = new System.Drawing.Point(1132, 394);
            this.pictureBox3.Name = "pictureBox3";
            this.pictureBox3.Size = new System.Drawing.Size(107, 266);
            this.pictureBox3.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox3.TabIndex = 12;
            this.pictureBox3.TabStop = false;
            // 
            // pictureBox4
            // 
            this.pictureBox4.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox4.Image")));
            this.pictureBox4.Location = new System.Drawing.Point(33, 120);
            this.pictureBox4.Name = "pictureBox4";
            this.pictureBox4.Size = new System.Drawing.Size(58, 51);
            this.pictureBox4.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox4.TabIndex = 13;
            this.pictureBox4.TabStop = false;
            // 
            // pictureBox5
            // 
            this.pictureBox5.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox5.Image")));
            this.pictureBox5.Location = new System.Drawing.Point(844, 74);
            this.pictureBox5.Name = "pictureBox5";
            this.pictureBox5.Size = new System.Drawing.Size(45, 41);
            this.pictureBox5.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox5.TabIndex = 14;
            this.pictureBox5.TabStop = false;
            // 
            // pictureBox6
            // 
            this.pictureBox6.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.pictureBox6.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox6.Image")));
            this.pictureBox6.Location = new System.Drawing.Point(1165, 307);
            this.pictureBox6.Name = "pictureBox6";
            this.pictureBox6.Size = new System.Drawing.Size(62, 60);
            this.pictureBox6.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox6.TabIndex = 15;
            this.pictureBox6.TabStop = false;
            this.pictureBox6.WaitOnLoad = true;
            // 
            // giohang
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.AliceBlue;
            this.ClientSize = new System.Drawing.Size(1239, 734);
            this.Controls.Add(this.pictureBox6);
            this.Controls.Add(this.pictureBox5);
            this.Controls.Add(this.pictureBox4);
            this.Controls.Add(this.pictureBox3);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pic_anh);
            this.Controls.Add(this.dtgsanpham);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.bt_quaylai);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.Name = "giohang";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Giỏ Hàng";
            this.Load += new System.EventHandler(this.giohang_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pic_anh)).EndInit();
            this.panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dtgsanpham)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox6)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button bt_xoa;
        private System.Windows.Forms.Button bt_mua;
        private System.Windows.Forms.Button bt_quaylai;
        private System.Windows.Forms.DataGridView dtgsanpham;
        private System.Windows.Forms.PictureBox pic_anh;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataGridViewTextBoxColumn Colname;
        private System.Windows.Forms.DataGridViewTextBoxColumn Colprice;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.PictureBox pictureBox3;
        private System.Windows.Forms.PictureBox pictureBox4;
        private System.Windows.Forms.PictureBox pictureBox5;
        private System.Windows.Forms.PictureBox pictureBox6;
    }
}