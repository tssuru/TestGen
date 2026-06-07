try:
    a = 0
    m = 1
    
    class B:
        m = 2
        
        def __init__(self):
            global m
            self.m = 3
            m = 4
            B.m = 5
    
    obj = B()
    try:
        print(a, end=' ')
        print(m, end=' ')
        print(B.m, end=' ')
        print(obj.m)
    except:
        print('ERR')
    
except: print('error')
