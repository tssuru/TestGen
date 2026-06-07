try:
    c = 0
    k = 1
    
    class D:
        c = 2
        
        def __init__(self):
            self.c = 3
            c = 4
            D.c = 5
    
    obj = D()
    try:
        print(c, end=' ')
        print(k, end=' ')
        print(D.c, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
