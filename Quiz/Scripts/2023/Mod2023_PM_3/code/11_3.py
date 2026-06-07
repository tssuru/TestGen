try:
    a = 0
    
    class C:
        a = 1
        
        def __init__(self):
            self.a = 2
            a = 3
            C.a = 4
    
    obj = C()
    C.a = 5
    try:
        print(a, end=' ')
        print(obj.a, end=' ')
        print(C.a, end=' ')
        print(obj.a, end=' ')
        print(obj._C__a)
    except:
        print('ERR')
    
except: print('error')
