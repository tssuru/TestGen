try:
    b = 0
    
    class B:
        b = 1
        
        def __init__(self):
            self.b = 2
            b = 3
            B.b = 4
    
    obj = B()
    obj.b = 5
    try:
        print(b, end=' ')
        print(obj.b, end=' ')
        print(B.b, end=' ')
        print(obj.b, end=' ')
        print(obj._B__b)
    except:
        print('ERR')
    
except: print('error')
