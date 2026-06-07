try:
    d = 0
    h = 1
    
    class A:
        h = 2
        
        def __init__(self):
            self.h = 3
            h = 4
            A.h = 5
    
    obj = A()
    try:
        print(d, end=' ')
        print(h, end=' ')
        print(A.h, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
