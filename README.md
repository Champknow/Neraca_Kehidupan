# Neraca Kehidupan 💰

Aplikasi personal finance dashboard untuk mencatat pemasukan & pengeluaran, memantau anggaran bulanan, dan melihat tren keuangan. Dibangun sebagai bagian dari portofolio **IT Analyst & Full Stack Data App Developer**.

## 🚀 Fitur Utama
- **Dashboard Interaktif:** Saldo real-time, pie chart pengeluaran, progress anggaran per kategori.
- **Form Transaksi Cepat:** Input pemasukan/pengeluaran dengan kategori dinamis.
- **Manajemen Anggaran:** Tambah/edit kategori dan tentukan budget bulanan.
- **Riwayat Transaksi:** Filter per bulan dan ekspor ke Excel.
- **Responsive UI:** Dibangun dengan Streamlit + Plotly.

## 🛠 Tech Stack
- Python, Streamlit, Pandas, Plotly, OpenPyXL

## 📁 Struktur Data
- `data/categories.csv`: Master kategori & budget.
- `data/transactions.csv`: Log transaksi harian.

## 🌐 Live Demo
[https://champknow-neraca-kehidupan.streamlit.app](https://champknow-neraca-kehidupan.streamlit.app)

## ▶️ Cara Menjalankan Lokal
```bash
git clone https://github.com/Champknow/neraca-kehidupan.git
cd neraca-kehidupan
python -m venv venv
source venv/bin/activate  # Mac/Linux
pip install -r requirements.txt
streamlit run app.py