try:
    c = 0
    
    class C:
        c = 1
        
        def __init__(self):
            self.c = 2
            c = 3
            C.c = 4
    
    obj = C()
    obj.c = 5
    try:
        print(c, end=' ')
        print(obj.c, end=' ')
        print(C.c, end=' ')
        print(obj.c, end=' ')
        print(obj._C__c)
    except:
        print('ERR')
    
except: print('error')
