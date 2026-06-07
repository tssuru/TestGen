try:
    a = 0
    j = 1
    
    class C:
        j = 2
        
        def __init__(self):
            global j
            self.j = 3
            j = 4
            C.j = 5
    
    obj = C()
    try:
        print(a, end=' ')
        print(j, end=' ')
        print(C.j, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
