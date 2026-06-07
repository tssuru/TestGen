try:
    c = 0
    j = 1
    
    class C:
        c = 2
        
        def __init__(self):
            global c
            self.j = 3
            c = 4
            C.c = 5
    
    obj = C()
    try:
        print(c, end=' ')
        print(j, end=' ')
        print(C.c, end=' ')
        print(obj.j)
    except:
        print('ERR')
    
except: print('error')
