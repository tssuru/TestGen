try:
    a = 0
    h = 1
    
    class C:
        h = 2
        
        def __init__(self):
            global h
            self.h = 3
            h = 4
            C.h = 5
    
    obj = C()
    try:
        print(a, end=' ')
        print(h, end=' ')
        print(C.h, end=' ')
        print(obj.h)
    except:
        print('ERR')
    
except: print('error')
