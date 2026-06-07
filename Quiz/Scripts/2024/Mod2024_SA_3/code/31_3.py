try:
    c = 0
    m = 1
    
    class B:
        c = 2
        
        def __init__(self):
            self.m = 3
            c = 4
            B.c = 5
    
    obj = B()
    try:
        print(c, end=' ')
        print(m, end=' ')
        print(B.c, end=' ')
        print(obj.m)
    except:
        print('ERR')
    
except: print('error')
