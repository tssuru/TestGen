try:
    d = 0
    k = 1
    
    class A:
        d = 2
        
        def __init__(self):
            global d
            self.d = 3
            d = 4
            A.d = 5
    
    obj = A()
    try:
        print(d, end=' ')
        print(k, end=' ')
        print(A.d, end=' ')
        print(obj.d)
    except:
        print('ERR')
    
except: print('error')
