try:
    c = 0
    k = 1
    
    class D:
        c = 2
        
        def __init__(self):
            global c
            self.k = 3
            c = 4
            D.c = 5
    
    obj = D()
    try:
        print(c, end=' ')
        print(k, end=' ')
        print(D.c, end=' ')
        print(obj.k)
    except:
        print('ERR')
    
except: print('error')
