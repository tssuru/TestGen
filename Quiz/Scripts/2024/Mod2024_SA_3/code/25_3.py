try:
    d = 0
    k = 1
    
    class C:
        d = 2
        
        def __init__(self):
            self.k = 3
            d = 4
            C.d = 5
    
    obj = C()
    try:
        print(d, end=' ')
        print(k, end=' ')
        print(C.d, end=' ')
        print(obj.k)
    except:
        print('ERR')
    
except: print('error')
