try:
    c = 0
    m = 1
    
    class A:
        m = 2
        
        def __init__(self):
            global m
            self.m = 3
            m = 4
            A.m = 5
    
    obj = A()
    try:
        print(c, end=' ')
        print(m, end=' ')
        print(A.m, end=' ')
        print(obj.m)
    except:
        print('ERR')
    
except: print('error')
