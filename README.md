# Pemrograman_FadjrinaMaylani_Citrine_TLS26
# 🚀 Luminous Quest: Pemrograman Dasar TLS 2026

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![TLS 2026](https://img.shields.io/badge/Task-TLS%202026-purple.svg)]()
[![Status: Completed](https://img.shields.io/badge/Status-Completed-success.svg)]()

Selamat datang di repositori **Luminous Quest - Pemrograman Dasar TLS 2026**! Repositori ini berisi solusi logika, flowchart, dan implementasi program C++ murni untuk menyelesaikan dua tantangan utama berbasis problem-solving [1, 2].

---

## 👤 Informasi Mahasiswa
- **Nama Lengkap:** [Fadjrina Maylani]
- **Kelompok:** [Citrine]

---

## 🧩 Ringkasan Problem & Solusi

### 👨‍🚀 Problem 1: The Last Astronaut
Sebuah simulasi permainan eliminasi lingkaran ala *Josephus Problem* dengan aturan dinamis.
* **Aturan Main:** 
  * Astronot berdiri membentuk lingkaran berturut-turut dari 1 hingga n.
  * Penghitungan eliminasi dilakukan berdasarkan nilai kelipatan k.
* **Aturan Khusus Variabel:**
  * Jika nomor astronot yang tereliminasi bernilai **GENAP**, nilai k bertambah 2.
  * Jika nomor astronot yang tereliminasi bernilai **GANJIL**, nilai k berkurang 1.
  * Batas minimum k adalah 2.
* **Output:** Urutan astronot yang tereliminasi serta astronot terakhir yang bertahan.

---

### 👽 Problem 2: Alien-In-The-Middle (Autokey Cipher)
Program enkripsi pesan rahasia menggunakan algoritma **Autokey Cipher** untuk komunikasi aman antar astronot manusia
* **Mekanisme Enkripsi:**
  * Setiap huruf digeser sebesar nilai alfabet huruf sebelumnya (A=1, B=2, ..., Z=26).
  * Huruf pertama tidak mengalami pergeseran.
  * Menggunakan operasi Modulo 26 jika nilai pergeseran melebihi huruf Z.
* **Fitur Program:**
  * Otomatis mengonversi huruf kecil (*lowercase*) menjadi huruf kapital (*uppercase*).
  * Mengabaikan spasi dan karakter non-alfabet tanpa merusak struktur pesan.

---

## 📁 Struktur Repositori

```text
.
├── Phase_1_Dokumen_Logika.pdf     # Berisi Pseudocode, Flowchart, dan Penjelasan Logika
├── problem1_last_astronaut.cpp    # Kode Sumber C++ Problem 1
├── problem2_alien_cipher.cpp      # Kode Sumber C++ Problem 2
└── README.md                      # Dokumentasi Proyek

Dibuat dengan 💻 dan ☕ untuk Luminous Quest Pemrograman Dasar TLS 2026
