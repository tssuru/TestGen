try:
    a = 0
    k = 1
    
    class D:
        k = 2
        
        def __init__(self):
            self.a = 3
            k = 4
            D.k = 5
    
    obj = D()
    try:
        print(a, end=' ')
        print(k, end=' ')
        print(D.k, end=' ')
        print(obj.a)
    except:
        print('ERR')
    
except: print('error')
