try:
    d = 0
    h = 1
    
    class A:
        d = 2
        
        def __init__(self):
            self.h = 3
            d = 4
            A.d = 5
    
    obj = A()
    try:
        print(d, end=' ')
        print(h, end=' ')
        print(A.d, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
