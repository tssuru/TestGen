try:
    b = 0
    
    class C:
        b = 1
        
        def __init__(self):
            self.b = 2
            b = 3
            C.b = 4
    
    obj = C()
    C.b = 5
    try:
        print(b, end=' ')
        print(obj.b, end=' ')
        print(C.b, end=' ')
        print(obj.b, end=' ')
        print(obj._C__b)
    except:
        print('ERR')
    
except: print('error')
