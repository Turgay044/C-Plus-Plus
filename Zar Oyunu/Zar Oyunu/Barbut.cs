using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;


namespace Zar_Oyunu
{
    public partial class Barbut : Form
    {
        public Barbut()
        {
            InitializeComponent();
        }

        private void btnRoll_Click(object sender, EventArgs e)
        {
            Random myDiceRandom = new Random();
            int dice1, dice2, dice3, dice4;

            dice1 = myDiceRandom.Next(6) + 1;
            dice2 = myDiceRandom.Next(6) + 1;
            dice3 = myDiceRandom.Next(6) + 1;
            dice4 = myDiceRandom.Next(6) + 1;

            lbDice1.Image = Image.FromFile("resimler\\" + dice1.ToString() + ".jpg");
            lbDice2.Image = Image.FromFile("resimler\\" + dice2.ToString() + ".jpg");
            lbDice3.Image = Image.FromFile("resimler\\" + "Bil" + dice3.ToString() + ".jpg");
            lbDice4.Image = Image.FromFile("resimler\\" + "Bil" + dice4.ToString() + ".jpg");

            txtHistory.Text += dice1.ToString() + "," + dice2.ToString() + "=" + Convert.ToString(dice1 + dice2) + "\t\t"
                                   + dice3.ToString() + "," + dice4.ToString() + "=" + Convert.ToString(dice3 + dice4) + "\t\t";
            if ((dice1 + dice2) > (dice3 + dice4))
                txtHistory.Text += "Oyuncu Kazandı";
            else if ((dice1 + dice2) < (dice3 + dice4))
                txtHistory.Text += "Bilgisayar Kazandı";
            else
                txtHistory.Text += "Berabere";
            txtHistory.Text += Environment.NewLine;
        }

        private void Barbut_Load(object sender, EventArgs e)
        {
            txtHistory.Text = "Oyunucu\t\tBilgisayar\t\tKazanan" + Environment.NewLine;
        }
    }
}
