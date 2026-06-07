try:
    b = 0
    m = 1
    
    class C:
        m = 2
        
        def __init__(self):
            global m
            self.b = 3
            m = 4
            C.m = 5
    
    obj = C()
    try:
        print(b, end=' ')
        print(m, end=' ')
        print(C.m, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
