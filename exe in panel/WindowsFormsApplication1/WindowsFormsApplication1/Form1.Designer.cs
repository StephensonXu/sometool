using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.appContainer1 = new SmileWei.EmbeddedApp.AppContainer(this.components);
            this.SuspendLayout();
            // 
            // appContainer1
            // 
            this.appContainer1.AppFilename = "";
            this.appContainer1.AppProcess = null;
            this.appContainer1.BackColor = System.Drawing.Color.Transparent;
            this.appContainer1.Location = new System.Drawing.Point(337, 222);
            this.appContainer1.Name = "appContainer1";
            this.appContainer1.Size = new System.Drawing.Size(524, 345);
            this.appContainer1.TabIndex = 0;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(1110, 622);
            this.Controls.Add(this.appContainer1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.load1);
            this.ResumeLayout(false);

        }

        #endregion

        private SmileWei.EmbeddedApp.AppContainer appContainer1;








    }
}

