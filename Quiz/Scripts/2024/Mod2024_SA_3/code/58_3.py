try:
    c = 0
    n = 1
    
    class C:
        n = 2
        
        def __init__(self):
            self.c = 3
            n = 4
            C.n = 5
    
    obj = C()
    try:
        print(c, end=' ')
        print(n, end=' ')
        print(C.n, end=' ')
        print(obj.c)
    except:
        print('ERR')
    
except: print('error')
