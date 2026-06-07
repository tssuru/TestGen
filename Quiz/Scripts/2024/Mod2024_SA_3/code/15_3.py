try:
    d = 0
    
    class C:
        d = 1
        
        def __init__(self):
            self.d = 2
            d = 3
            C.d = 4
    
    obj = C()
    obj.d = 5
    try:
        print(d, end=' ')
        print(obj.d, end=' ')
        print(C.d, end=' ')
        print(obj.d, end=' ')
        print(obj._C__d)
    except:
        print('ERR')
    
except: print('error')
