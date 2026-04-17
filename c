id,name,type,budget
CAT001,Makanan,Pengeluaran,500000
CAT002,Transport,Pengeluaran,300000
CAT003,Hiburan,Pengeluaran,200000
CAT004,Gaji,Pemasukan,0
CAT005,Bonus,Pemasukan,0
nano app.py
import streamlit as st
import pandas as pd
import os
from datetime import datetime

st.set_page_config(page_title="Neraca Kehidupan", page_icon="💰", layout="wide")

# --- Fungsi Data ---
def load_categories():
    path = "data/categories.csv"
    if os.path.exists(path):
        return pd.read_csv(path)
    else:
        df = pd.DataFrame(columns=["id", "name", "type", "budget"])
        df.to_csv(path, index=False)
        return df

def load_transactions():
    path = "data/transactions.csv"
    if os.path.exists(path):
        return pd.read_csv(path)
    else:
        df = pd.DataFrame(columns=["id", "type", "category", "amount", "date", "note"])
        df.to_csv(path, index=False)
        return df

# --- Sidebar ---
st.sidebar.title("Neraca Kehidupan")
menu = st.sidebar.radio("Menu", ["🏠 Dashboard", "📋 Transaksi", "📊 Anggaran", "📂 Riwayat"])

# --- Placeholder Pages ---
if menu == "🏠 Dashboard":
    st.title("Dashboard Keuangan")
    st.info("🚧 Fitur Dashboard akan segera hadir.")

elif menu == "📋 Transaksi":
    st.title("Tambah Transaksi")
    st.info("Form transaksi akan ditambahkan di sini.")

elif menu == "📊 Anggaran":
    st.title("Kelola Anggaran")
    df_cat = load_categories()
    st.dataframe(df_cat)

elif menu == "📂 Riwayat":
    st.title("Riwayat Transaksi")
    df_trans = load_transactions()
    st.dataframe(df_trans)

