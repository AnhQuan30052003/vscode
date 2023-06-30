from random import randint as rand
import os
import time

def XuLyChon(so):
    if so == 1: return 'keo'
    if so == 2: return 'bua'
    return 'bao'

def KeoBuaBao(chon1, chon2):
    if chon1 == chon2: return "Hoa"

    if chon1 == 'keo':
        if chon2 == 'bua': return 'Bua win'
        if chon2 == 'bao': return 'Keo win'

    if chon1 == 'bua':
        if chon2 == 'keo': return 'Bua win'
        if chon2 == 'bao': return 'Bao win'

    if chon1 == 'bao':
        if chon2 == 'bua': return 'Bao win'
        if chon2 == 'keo': return 'Keo win'


for i in range(100):
    os.system('cls')
    may1 = XuLyChon(rand(1,3))
    may2 = XuLyChon(rand(1,3))
    print(f'May1({may1}) VS May2({may2}): {KeoBuaBao(may1, may2)}')
    time.sleep(3)
