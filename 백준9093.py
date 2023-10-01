a = int(input())

for i in range(a): # a-> 몇 줄을 받을건지
    b = input()
    k = ''
    m = '' 
    for j in range(len(b)): # 문장의 길이만큼 반복문을 돌림
        if b[j] != ' ': # 한글자씩 반복문을 돌려 문자면 k에 더하고 아니면 k에 더해진 문자들을 역으로 m에 더함
            k += b[j]
        else:
            m += k[::-1]
            m += ' '
            k = '' # k 초기화
    m += k[::-1]
    print(m)
