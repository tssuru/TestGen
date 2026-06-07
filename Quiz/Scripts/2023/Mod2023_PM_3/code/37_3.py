try:
    a = 0
    m = 1
    
    class A:
        m = 2
        
        def __init__(self):
            self.a = 3
            m = 4
            A.m = 5
    
    obj = A()
    try:
        print(a, end=' ')
        print(m, end=' ')
        print(A.m, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
