try:
    def f():
        try:
            res = int("6")
            return 42
        except ZeroDivisionError: return 5
        except TypeError: return 8
        else: return 30
        return res
    
    print(f())
    
except: print('error')
