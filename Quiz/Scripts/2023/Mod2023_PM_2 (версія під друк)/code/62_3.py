try:
    def f():
        try:
            res = int(7%0.0)
        except Exception: return 5
        except TypeError: return 6
        else: return 31
        return res
    
    print(f())
    
except: print('error')
