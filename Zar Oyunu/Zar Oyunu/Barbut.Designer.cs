namespace Zar_Oyunu
{
    partial class Barbut
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
            this.txtHistory = new System.Windows.Forms.TextBox();
            this.btnRoll = new System.Windows.Forms.Button();
            this.lbDice4 = new System.Windows.Forms.Label();
            this.lbDice3 = new System.Windows.Forms.Label();
            this.lbDice2 = new System.Windows.Forms.Label();
            this.lbDice1 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtHistory
            // 
            this.txtHistory.Location = new System.Drawing.Point(17, 314);
            this.txtHistory.Multiline = true;
            this.txtHistory.Name = "txtHistory";
            this.txtHistory.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.txtHistory.Size = new System.Drawing.Size(449, 153);
            this.txtHistory.TabIndex = 2;
            // 
            // btnRoll
            // 
            this.btnRoll.Location = new System.Drawing.Point(201, 12);
            this.btnRoll.Name = "btnRoll";
            this.btnRoll.Size = new System.Drawing.Size(75, 23);
            this.btnRoll.TabIndex = 3;
            this.btnRoll.Text = "Zar At";
            this.btnRoll.UseVisualStyleBackColor = true;
            this.btnRoll.Click += new System.EventHandler(this.btnRoll_Click);
            // 
            // lbDice4
            // 
            this.lbDice4.Image = global::Zar_Oyunu.Properties.Resources.Bil2;
            this.lbDice4.Location = new System.Drawing.Point(369, 203);
            this.lbDice4.Name = "lbDice4";
            this.lbDice4.Size = new System.Drawing.Size(97, 93);
            this.lbDice4.TabIndex = 5;
            // 
            // lbDice3
            // 
            this.lbDice3.Image = global::Zar_Oyunu.Properties.Resources.Bil1;
            this.lbDice3.Location = new System.Drawing.Point(268, 107);
            this.lbDice3.Name = "lbDice3";
            this.lbDice3.Size = new System.Drawing.Size(97, 93);
            this.lbDice3.TabIndex = 4;
            // 
            // lbDice2
            // 
            this.lbDice2.Image = global::Zar_Oyunu.Properties.Resources._2;
            this.lbDice2.Location = new System.Drawing.Point(111, 203);
            this.lbDice2.Name = "lbDice2";
            this.lbDice2.Size = new System.Drawing.Size(97, 93);
            this.lbDice2.TabIndex = 1;
            // 
            // lbDice1
            // 
            this.lbDice1.Image = global::Zar_Oyunu.Properties.Resources._1;
            this.lbDice1.Location = new System.Drawing.Point(10, 107);
            this.lbDice1.Name = "lbDice1";
            this.lbDice1.Size = new System.Drawing.Size(97, 93);
            this.lbDice1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(20, 65);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(94, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "Oyuncunun Zarları";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(284, 65);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(91, 13);
            this.label2.TabIndex = 7;
            this.label2.Text = "Bilgisayarın Zarları";
            // 
            // Barbut
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(479, 479);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.lbDice4);
            this.Controls.Add(this.lbDice3);
            this.Controls.Add(this.btnRoll);
            this.Controls.Add(this.txtHistory);
            this.Controls.Add(this.lbDice2);
            this.Controls.Add(this.lbDice1);
            this.Name = "Barbut";
            this.Text = "Barbut";
            this.Load += new System.EventHandler(this.Barbut_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbDice1;
        private System.Windows.Forms.Label lbDice2;
        private System.Windows.Forms.TextBox txtHistory;
        private System.Windows.Forms.Button btnRoll;
        private System.Windows.Forms.Label lbDice4;
        private System.Windows.Forms.Label lbDice3;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}