NAMA  : Chalida Zia
+    NIM   : 1301154491
+    KELAS : IF-39-01
 **/
 
 
@@ -12,55 +12,92 @@ using namespace std;
 /**
     - daftarkan seluruh variable global yang dibutuhkan di sini
 **/
-//=================================================
-// YOUR CODE STARTS HERE
-
-
-// YOUR CODE ENDS HERE
-//=================================================
-
-
+        int x=0, y=0, j=0, k=0;
+        char in;
+        
 void main_menu();
 void set_standar();
 void set_proporsi_nilai();
 char hitung_index(double uts, double uas, double tubes);
 void input_nilai();
 void thank_you();
 
-int main() {
+int main ();
+{
     main_menu();
     return 0;
 }
 
-void main_menu(){
-    /**
-    - fungsi berisi pilihan menu di dalam aplikasi:
-      daftar menu:
-      1. set standar index nilai
-      2. set proporsi nilai
-      3. input nilai
-      4. keluar
-    - fungsi meminta input pilihan menu dari user
-      dan memanggil fungsi menu yang dipilih
-    **/
-
+void main_menu();
+{
     int pilihan;
-    //=================================================
-    // YOUR CODE STARTS HERE
-
-
-    // YOUR CODE ENDS HERE
-    //=================================================
-    thank_you();
+    cout << "1. Set Standar Indeks Nilai" << endl;
+    cout << "2. Set Proporsi Nilai" << endl;
+    cout << "3. Input Nilai" << endl;
+    cout << "Keluar" << endl;
+    cout << "Masukkan Pilihan: ";
+    cin >> pilihan;
+    
+        switch (pilihan)
+        {
+            case 1: set_standar(); break;
+            case 2: set_proporsi_nilai(); break;
+            case 3: input_nilai(); break;
+            case 4: thank_you(); break;
+        }
 }
 
+void set_standar();
+{
+    cout << "Masukkan Standar Nilai Minimum 1: ";
+    cin >> x;
+    cout << "Masukkan Standar Nilai Minimum 2: ";
+    cin >> y;
+    cout << "Masukkan Standar Nilai Minimum 3: ";
+    cin >> j;
+    cout << "Masukkan Standar Nilai Minimum 4: ";
+    cin >> k;
+    
+    if (y>x)
+    {
+        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
+        set_standar();
+    }
+    else if (j>y)
+    {
+        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
+        set_standar();
+    }
+    else if (k>j)
+    {
+        cout << "Input Standar Salah, Silahkan Ulangi Lagi" << endl;
+        set_standar();
+    }
+    
+    main_menu();
+}
 
 void set_proporsi_nilai(){
     /**
     - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
     - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
     - fungsi akan mengulang menerima input dari user jika total prosentase != 100
     **/
+        cout << "Input Presentase Nilai dalam Persen: " <<endl;
+        cout << "Masukkan Presentase UTS: ";
+        cin >> puts;
+        cout << "Masukkan Presentase UAS: ";
+        cin >> puas;
+        cout << "Masukkan Presentase Tubes: ";
+        cin >> ptubes;
+        
+        presentase = puts+puas+ptubes;
+        if (presentase !=100)
+        {
+            cout << "Total Input Presentase !=100, Silahkan Ulangi Lagi" << endl;
+            set_proporsi_nilai();
+        }
+        main_menu();
     //=================================================
     // YOUR CODE STARTS HERE
 
@@ -69,21 +106,6 @@ void set_proporsi_nilai(){
     //=================================================
 }
 
-void set_standar(){
-    /**
-    - fungsi mengubah standar index A, B, C, D, dan E
-    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
-    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
-    **/
-    //=================================================
-    // YOUR CODE STARTS HERE
-
-
-    // YOUR CODE ENDS HERE
-    //=================================================
-}
-
-
 char hitung_index(double uts, double uas, double tubes){
     /**
     - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
@@ -92,6 +114,19 @@ char hitung_index(double uts, double uas, double tubes){
     **/
 
     char index;
+	    double sum:
+	
+        sum=(((uts*puts)/100)+((uas*puas)/100)+((tubes*ptubes)/100));
+	    if (sum>=x)
+		    index ='A';
+	    else if (sum>=y && sum<=x)
+		    index='B';
+	    else if (sum>=j && sum<=y)
+		    index='C';
+	    else if (sum>=k && sum<=j)
+		    index='D';
+	    else
+		    index='E';
     //=================================================
     // YOUR CODE STARTS HERE
 
@@ -108,6 +143,16 @@ void input_nilai(){
     - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
     **/
     double uas, uts, tubes;
+        cout<<"masukkan nilai uts : ";
+	    cin>>uts;
+	    cout<<"masukkan nilai uas : ";
+	    cin>>uas;
+	    cout<<"masukkan nilai tubes : ";
+	    cin>>tubes;
+	    hitung_index(uts,uas,tubes);
+	    cout<<hitung_index();
+	    cout<<"indeks nilai anda adalah "<<hitung_index(uts,uas,tubes);
+	    main_menu();
     //=================================================
     // YOUR CODE STARTS HERE
 
@@ -121,6 +166,10 @@ void thank_you(){
     - fungsi menampilkan pesan singkat untuk mengakhiri program
     - tampilkan nim dan nama kalian
     **/
+        cout<<endl;
+	    cout<<"Terima Kasih telah meggunakan aplikasi kami"<<endl;
+	    cout<<"1301154491 - Chalida Zia";
+	    cout<<endl;
     //=================================================
     // YOUR CODE STARTS HERE
 
