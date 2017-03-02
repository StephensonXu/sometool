using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            //MessageBox.Show(this.appContainer1.Handle.ToInt32().ToString());
            //写入txt
            StreamWriter sw = new StreamWriter("D:\\1.txt");
            string w = this.appContainer1.Handle.ToInt32().ToString();
            sw.Write(w);
            sw.Close();
            Process process;
            this.appContainer1.AppFilename =
                "C:\\Users\\Frank\\Desktop\\test8.exe";
            this.appContainer1.Start();
//            process = new Process();
//            process.StartInfo.FileName = Application.StartupPath+"test5.exe";
//            process.Start();

                
        }

        private void load1(object sender, EventArgs e)
        {
            this.BackColor = Color.White;
            this.TransparencyKey = Color.White;
        }

        
    }
}
