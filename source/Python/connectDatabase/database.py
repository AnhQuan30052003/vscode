from flask import Flask, render_template
import pyodbc

app = Flask(__name__, template_folder= "")

def get_db_connection():
  conn = pyodbc.connect(
    'DRIVER={ODBC Driver 17 for SQL Server};'
    'SERVER=ADMIN\SQLEXPRESS;'
    'DATABASE=testDB;'
    'Trusted_Connection=yes;'
  )
  return conn

@app.route('/')
def index():
  conn = get_db_connection()
  cursor = conn.cursor()
  cursor.execute('SELECT CMT, ten, tuoi FROM ConNguoi')
  connguoi = cursor.fetchall()
  conn.close()
  return render_template('index.html', persons=connguoi)

if __name__ == '__main__':
  app.run(debug=True)