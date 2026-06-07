try:
    def f():
        try:
            res = int("d1")
        except TypeError: return 3
        except ZeroDivisionError: return 5
        else: return 33
        return res
    
    print(f())
    
except: print('error')
