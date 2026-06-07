try:
    d = 0
    
    class D:
        d = 1
        
        def __init__(self):
            self.d = 2
            d = 3
            D.d = 4
    
    obj = D()
    D.d = 5
    try:
        print(d, end=' ')
        print(obj.d, end=' ')
        print(D.d, end=' ')
        print(obj.d, end=' ')
        print(obj._D__d)
    except:
        print('ERR')
    
except: print('error')
