try:
    b = 0
    
    class A:
        b = 1
        
        def __init__(self):
            self.b = 2
            b = 3
            A.b = 4
    
    obj = A()
    A.b = 5
    try:
        print(b, end=' ')
        print(obj.b, end=' ')
        print(A.b, end=' ')
        print(obj.b, end=' ')
        print(obj._A__b)
    except:
        print('ERR')
    
except: print('error')
