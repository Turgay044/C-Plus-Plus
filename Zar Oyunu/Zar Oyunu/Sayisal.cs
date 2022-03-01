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
    public partial class Sayisal : Form
    {
        public Sayisal()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random myRandom = new Random();
            int[] rndSayi=new int[6];
            int sayac, i, j;
            string lineStr;
            sayac = 8;
            listBox1.Items.Clear();
            
            do
            {
                lineStr = "";
                i = 0;
                do
                {
                    rndSayi[i] = myRandom.Next(49) + 1;
                    j = 0;
                    while (j < i)
                    {
                        if (rndSayi[j] == rndSayi[i])
                        {
                            rndSayi[i] = myRandom.Next(49) + 1;
                            continue;
                        }
                        else j++;
                    }
                    lineStr += rndSayi[i].ToString() + "   ";
                } while (++i < 6);
                listBox1.Items.Add(lineStr);
            } while (--sayac>=1);
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Zar_Oyunu.Barbut myBarbut = new Barbut();
            myBarbut.Show();
        }
    }
}
