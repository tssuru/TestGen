try:
    c = 0
    
    class B:
        c = 1
        
        def __init__(self):
            self.c = 2
            c = 3
            B.c = 4
    
    obj = B()
    B.c = 5
    try:
        print(c, end=' ')
        print(obj.c, end=' ')
        print(B.c, end=' ')
        print(obj.c, end=' ')
        print(obj._B__c)
    except:
        print('ERR')
    
except: print('error')
