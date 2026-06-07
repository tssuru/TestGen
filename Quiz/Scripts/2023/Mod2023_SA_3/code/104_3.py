try:
    b = 0
    m = 1
    
    class D:
        m = 2
        
        def __init__(self):
            self.b = 3
            m = 4
            D.m = 5
    
    obj = D()
    try:
        print(b, end=' ')
        print(m, end=' ')
        print(D.m, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
