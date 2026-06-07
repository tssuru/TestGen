try:
    d = 0
    j = 1
    
    class D:
        d = 2
        
        def __init__(self):
            self.d = 3
            d = 4
            D.d = 5
    
    obj = D()
    try:
        print(d, end=' ')
        print(j, end=' ')
        print(D.d, end=' ')
        print(obj.d)
    except:
        print('ERR')
    
except: print('error')
