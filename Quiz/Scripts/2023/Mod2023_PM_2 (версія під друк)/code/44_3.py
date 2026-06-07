try:
    def f():
        try:
            res = 4<=0
        except TypeError: return 8
        except ZeroDivisionError: return 9
        return res
    
    print(f())
    
except: print('error')
