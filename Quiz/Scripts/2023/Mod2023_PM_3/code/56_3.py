try:
    d = 0
    k = 1
    
    class B:
        d = 2
        
        def __init__(self):
            self.d = 3
            d = 4
            B.d = 5
    
    obj = B()
    try:
        print(d, end=' ')
        print(k, end=' ')
        print(B.d, end=' ')
        print(obj.d)
    except:
        print('ERR')
    
except: print('error')
