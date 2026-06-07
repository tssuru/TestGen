try:
    d = 0
    
    class B:
        d = 1
        
        def __init__(self):
            self.d = 2
            d = 3
            B.d = 4
    
    obj = B()
    obj.d = 5
    try:
        print(d, end=' ')
        print(obj.d, end=' ')
        print(B.d, end=' ')
        print(obj.d, end=' ')
        print(obj._B__d)
    except:
        print('ERR')
    
except: print('error')
