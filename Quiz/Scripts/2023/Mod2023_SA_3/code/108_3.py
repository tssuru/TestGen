try:
    d = 0
    
    class A:
        d = 1
        
        def __init__(self):
            self.d = 2
            d = 3
            A.d = 4
    
    obj = A()
    A.d = 5
    try:
        print(d, end=' ')
        print(obj.d, end=' ')
        print(A.d, end=' ')
        print(obj.d, end=' ')
        print(obj._A__d)
    except:
        print('ERR')
    
except: print('error')
