try:
    d = 0
    m = 1
    
    class D:
        m = 2
        
        def __init__(self):
            global m
            self.d = 3
            m = 4
            D.m = 5
    
    obj = D()
    try:
        print(d, end=' ')
        print(m, end=' ')
        print(D.m, end=' ')
        print(obj.d)
    except:
        print('ERR')
    
except: print('error')
