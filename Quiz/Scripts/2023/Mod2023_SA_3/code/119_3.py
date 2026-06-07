try:
    b = 0
    n = 1
    
    class C:
        b = 2
        
        def __init__(self):
            global b
            self.b = 3
            b = 4
            C.b = 5
    
    obj = C()
    try:
        print(b, end=' ')
        print(n, end=' ')
        print(C.b, end=' ')
        print(obj.b)
    except:
        print('ERR')
    
except: print('error')
