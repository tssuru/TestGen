try:
    b = 0
    k = 1
    
    class D:
        k = 2
        
        def __init__(self):
            self.b = 3
            k = 4
            D.k = 5
    
    obj = D()
    try:
        print(b, end=' ')
        print(k, end=' ')
        print(D.k, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
