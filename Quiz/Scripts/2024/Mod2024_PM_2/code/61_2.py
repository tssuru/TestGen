try:
    def f():
        try:
            res = 0>8
        except TypeError: return 2
        except ZeroDivisionError: return 4
        else: return 34
        return res
    
    print(f())
    
except: print('error')
