try:
    c = 0
    n = 1
    
    class B:
        c = 2
        
        def __init__(self):
            self.n = 3
            c = 4
            B.c = 5
    
    obj = B()
    try:
        print(c, end=' ')
        print(n, end=' ')
        print(B.c, end=' ')
        print(obj.n)
    except:
        print('ERR')
    
except: print('error')
