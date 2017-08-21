def ransom_note(magazine, ransom):
    for i in ransom:
        if i in magazine:
            magazine.remove(i)
        else:
            return False
    return True
            
        

m, n = map(int, input().strip().split(' '))
magazine = input().strip().split(' ')
ransom = input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print("Yes")
else:
    print("No")
