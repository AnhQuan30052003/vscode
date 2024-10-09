import os
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto.Random import get_random_bytes

os.system("cls")

# Tạo cặp khóa RSA
key = RSA.generate(2048)
private_key = key.export_key()
public_key = key.publickey().export_key()

print(f"PrivateKey: {private_key}")
print(f"PublicKey: {public_key}")

def RSA_crypto(message: bytes):
  cipher_rsa = PKCS1_OAEP.new(RSA.import_key(public_key))
  encrypted_message = cipher_rsa.encrypt(message)

  # Hiển thị mã hoá dưới dạng hệ 16 (hex)
  print("Encrypted message (hex):", encrypted_message)

  # Giải mã thông điệp
  cipher_rsa = PKCS1_OAEP.new(RSA.import_key(private_key))
  decrypted_message = cipher_rsa.decrypt(encrypted_message)

  print("Decrypted message:", decrypted_message)
