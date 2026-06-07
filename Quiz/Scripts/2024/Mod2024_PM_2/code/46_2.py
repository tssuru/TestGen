try:
    def f():
        try:
            res = int(1%0)
        except TypeError: return 5
        except ZeroDivisionError: return 6
        return res
    
    print(f())
    
except: print('error')
