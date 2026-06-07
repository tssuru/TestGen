try:
    def f():
        try:
            res = int("9")
            return 42
        except TypeError: return 6
        except ZeroDivisionError: return 5
        return res
    
    print(f())
    
except: print('error')
