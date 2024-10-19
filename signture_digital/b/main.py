import os
import pikepdf  
import fitz  # PyMuPDF

def getPath(fileName: str):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, fileName)

# Đường dẫn tới file PDF và các file liên quan đến khóa/chứng chỉ
pdf_file = "document.pdf"
cert_file = "certificate.pem"
key_file = "private_key.pem"
output_pdf = "a.pdf"

# Ký số file PDF
# pikepdf.sign(pdf_file, output_pdf, key_file, cert_file)

# Mở file PDF sau khi ký và thêm metadata
doc = fitz.open(getPath(output_pdf))
doc.metadata['title'] = "PDF signed by Nguyễn Anh Quân"
doc.metadata['author'] = "Nguyễn Anh Quân"
doc.metadata['subject'] = "Digital Signature"
doc.save(getPath("aa.pdf"))
doc.close()

os.system("cls")
print("Build done.")