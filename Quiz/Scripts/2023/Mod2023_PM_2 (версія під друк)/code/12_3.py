try:
    def f():
        try:
            res = int("7")
            return 42
        except TypeError: return 8
        except Exception: return 4
        return res
    
    print(f())
    
except: print('error')
