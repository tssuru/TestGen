try:
    def f():
        try:
            res = int(4/0.0)
            return 42
        except ZeroDivisionError: return 9
        except TypeError: return 7
        else: return 31
        return res
    
    print(f())
    
except: print('error')
