try:
    b = 0
    
    class D:
        b = 1
        
        def __init__(self):
            self.b = 2
            b = 3
            D.b = 4
    
    obj = D()
    obj.b = 5
    try:
        print(b, end=' ')
        print(obj.b, end=' ')
        print(D.b, end=' ')
        print(obj.b, end=' ')
        print(obj._D__b)
    except:
        print('ERR')
    
except: print('error')
