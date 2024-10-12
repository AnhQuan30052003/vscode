def RSA_crypt(message: bytes, decryption: bool=False):
  index = 0
  text = b""
  size = 470 if not decryption else 512

  while index < len(message):
    subString = message[index : index + size]
    
    if decryption:
      subString = de.decrypt(subString)
    else:
      subString = en.encrypt(subString)

    index += size
    text += subString

  return text