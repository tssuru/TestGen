try:
    def f():
        try:
            res = int("a0")
            return 42
        except ValueError: return 2
        except TypeError: return 8
        else: return 35
        return res
    
    print(f())
    
except: print('error')
