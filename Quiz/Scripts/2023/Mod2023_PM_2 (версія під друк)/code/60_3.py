try:
    def f():
        try:
            res = int(0/0.0)
            return 40
        except TypeError: return 3
        except Exception: return 6
        else: return 35
        return res
    
    print(f())
    
except: print('error')
