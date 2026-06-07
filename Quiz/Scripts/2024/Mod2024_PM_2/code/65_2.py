try:
    def f():
        try:
            res = int("6")
            return 44
        except TypeError: return 3
        except Exception: return 4
        else: return 35
        return res
    
    print(f())
    
except: print('error')
