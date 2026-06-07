try:
    b = 0
    k = 1
    
    class A:
        b = 2
        
        def __init__(self):
            self.b = 3
            b = 4
            A.b = 5
    
    obj = A()
    try:
        print(b, end=' ')
        print(k, end=' ')
        print(A.b, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
