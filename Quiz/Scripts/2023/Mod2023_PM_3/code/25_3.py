try:
    d = 0
    h = 1
    
    class C:
        d = 2
        
        def __init__(self):
            global d
            self.h = 3
            d = 4
            C.d = 5
    
    obj = C()
    try:
        print(d, end=' ')
        print(h, end=' ')
        print(C.d, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
