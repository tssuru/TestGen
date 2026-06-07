try:
    d = 0
    j = 1
    
    class C:
        d = 2
        
        def __init__(self):
            global d
            self.j = 3
            d = 4
            C.d = 5
    
    obj = C()
    try:
        print(d, end=' ')
        print(j, end=' ')
        print(C.d, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
