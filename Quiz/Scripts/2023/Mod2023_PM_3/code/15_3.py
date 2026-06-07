try:
    b = 0
    k = 1
    
    class C:
        b = 2
        
        def __init__(self):
            global b
            self.k = 3
            b = 4
            C.b = 5
    
    obj = C()
    try:
        print(b, end=' ')
        print(k, end=' ')
        print(C.b, end=' ')
        print(obj.k)
    except:
        print('ERR')
    
except: print('error')
