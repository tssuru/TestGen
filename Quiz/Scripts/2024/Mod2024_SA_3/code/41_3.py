try:
    b = 0
    n = 1
    
    class D:
        b = 2
        
        def __init__(self):
            self.b = 3
            b = 4
            D.b = 5
    
    obj = D()
    try:
        print(b, end=' ')
        print(n, end=' ')
        print(D.b, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
