try:
    for a in range(2,2+2,2):
        if a<=5:
            continue
        print(a, end=' ')
        a=1
        if a>7:
            break
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
